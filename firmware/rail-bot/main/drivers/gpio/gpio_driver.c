#include "esp32c3_gpio_regs.h"
#include "gpio_driver.h"

#include <stdint.h>



#define GPIO_PIN_COUNT						22U

#define IO_MUX_GPIO_MCU_SEL_GPIO_FUNC		1U

#define GPIO_MATRIX_SIMPLE_GPIO_OUT_PERI	128U
#define GPIO_ENABLE_W1TS_REG_VAL    		1U

#define GPIO_ENABLE_W1TC_REG_VAL			1U



static void gpio_select_gpio_func(uint8_t gpio_num){
	uint8_t reg = IO_MUX_GPIOn_REG(gpio_num);

	reg &= ~IO_MUX_GPIO_MCU_SEL_MASK;
	reg |= (IO_MUX_GPIO_MCU_SEL_GPIO_FUNC << IO_MUX_GPIO_MCU_SEL_FIELDPOS);

	IO_MUX_GPIOn_REG(gpio_num) |= reg;
}


void gpio_set_direction(uint8_t gpio_num, gpio_direction_t direction) {
	if (gpio_num > GPIO_PIN_COUNT){
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

		GPIO_ENABLE_W1TC_REG |= (GPIO_ENABLE_W1TC_REG_VAL << gpio_num);
	}
}