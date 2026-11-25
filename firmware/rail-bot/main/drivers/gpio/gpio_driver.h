#ifndef GPIO_DRIVER_H
#define GPIO_DRIVER_H

// not finished, subject to change as firmware develops
#include <stdint.h>

typedef enum {
	GPIO_INPUT,
	GPIO_OUTPUT
} gpio_direction_t;

typedef enum {
	GPIO_HIGH,
	GPIO_LOW
} gpio_level_t;


void gpio_set_direction(uint8_t gpio_num, gpio_direction_t direction);
void gpio_set_level(uint8_t gpio_num, gpio_level_t level);
void gpio_get_level(uint8_t gpio_num);


#endif