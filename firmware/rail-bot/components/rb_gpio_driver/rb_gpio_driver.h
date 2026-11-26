#ifndef RB_GPIO_DRIVER_H
#define RB_GPIO_DRIVER_H

// not finished, subject to change as firmware develops
#include <stdint.h>

typedef enum {
	RB_GPIO_INPUT,
	RB_GPIO_OUTPUT
} rb_gpio_direction_t;

typedef enum {
	RB_GPIO_HIGH = 1,
	RB_GPIO_LOW = 0
} rb_gpio_level_t;


void rb_gpio_set_direction			(uint8_t gpio_num, rb_gpio_direction_t direction);
void rb_gpio_set_level				(uint8_t gpio_num, rb_gpio_level_t level);
rb_gpio_level_t rb_gpio_get_level	(uint8_t gpio_num);

/* 
rb_gpio_get_level checks the actual physical voltage level, 
not the commanded output voltage level. 
*/


#endif