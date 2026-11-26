#ifndef RB_GPIO_DRIVER_H
#define RB_GPIO_DRIVER_H

// not finished, subject to change as firmware develops
#include <stdint.h>

typedef enum {
	GPIO_INPUT,
	GPIO_OUTPUT
} rb_gpio_direction_t;

typedef enum {
	GPIO_HIGH,
	GPIO_LOW
} rb_gpio_level_t;


void rb_gpio_set_direction			(uint8_t gpio_num, rb_gpio_direction_t direction);
void rb_gpio_set_level				(uint8_t gpio_num, rb_gpio_level_t level);
rb_gpio_level_t rb_gpio_get_level	(uint8_t gpio_num);

/* 
rb_gpio_get_level checks the actual physical voltage level, 
not the commanded output voltage level. 
*/


#endif