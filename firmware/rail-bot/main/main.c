#include "rb_gpio_driver.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void) {
    rb_gpio_set_direction(10U, GPIO_OUTPUT);

    while (1) {
        rb_gpio_set_level(10U, GPIO_HIGH);
        vTaskDelay(pdMS_TO_TICKS(1000));
        rb_gpio_set_level(10U, GPIO_LOW);
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
