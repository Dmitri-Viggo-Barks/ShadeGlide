#include "esp32c3_gpio_regs.h"
#include "rb_gpio_driver.h"

#include <stdint.h>


#define GPIO_PIN_COUNT						22U

#define IO_MUX_GPIO_MCU_SEL_GPIO_FUNC		1U

#define GPIO_MATRIX_SIMPLE_GPIO_OUT_PERI	128U
#define GPIO_ENABLE_W1TS_REG_VAL    		1U

#define GPIO_ENABLE_W1TC_REG_VAL			1U

#define GPIO_OUT_W1TS_VAL					1U
#define GPIO_OUT_W1TC_VAL					1U



static void gpio_select_gpio_func(uint8_t gpio_num){
	uint32_t reg = IO_MUX_GPIOn_REG(gpio_num);

	reg &= ~IO_MUX_GPIO_MCU_SEL_MASK;
	reg |= (IO_MUX_GPIO_MCU_SEL_GPIO_FUNC << IO_MUX_GPIO_MCU_SEL_FIELDPOS);

	IO_MUX_GPIOn_REG(gpio_num) = reg;
}


void rb_gpio_set_direction(uint8_t gpio_num, rb_gpio_direction_t direction) {
	if (gpio_num >= GPIO_PIN_COUNT){
		return;
	}

	gpio_select_gpio_func(gpio_num);

	if (direction == GPIO_OUTPUT){
		GPIO_FUNCn_OUT_SEL_CFG_REG(gpio_num) |= GPIO_MATRIX_SIMPLE_GPIO_OUT_PERI;
		GPIO_FUNCn_OUT_SEL_CFG_REG(gpio_num) |= GPIO_FUNC_OEN_SEL_MASK;

		GPIO_ENABLE_W1TS_REG = (GPIO_ENABLE_W1TS_REG_VAL << gpio_num);
	}
	else if (direction == GPIO_INPUT){
		IO_MUX_GPIOn_REG(gpio_num) |= IO_MUX_GPIO_FUN_IE_MASK;

		GPIO_ENABLE_W1TC_REG = (GPIO_ENABLE_W1TC_REG_VAL << gpio_num);
	}
}

void rb_gpio_set_level(uint8_t gpio_num, rb_gpio_level_t level){
	if (gpio_num >= GPIO_PIN_COUNT){
		return;
	}

	if (level == GPIO_HIGH){
		GPIO_OUT_W1TS_REG = (GPIO_OUT_W1TS_VAL << gpio_num);
	}
	else if (level == GPIO_LOW){
		GPIO_OUT_W1TC_REG = (GPIO_OUT_W1TC_VAL << gpio_num);
	}
}

/* 
rb_gpio_get_level checks the actual physical voltage level, 
not the commanded output voltage level. Maybe, if commanded
output voltage output reading is needed, have 
`rb_gpio_get_level_physical` and `rb_gpio_get_level_commanded`?
*/

rb_gpio_level_t rb_gpio_get_level(uint8_t gpio_num){
	if (gpio_num >= GPIO_PIN_COUNT){
		return NULL; // honestly idk what to put so NULL it is :P
	}

	if ((GPIO_IN_REG >> gpio_num) & 1U){
		return GPIO_HIGH;
	}

	return GPIO_LOW;
}