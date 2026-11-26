#include "rb_gpio_driver.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void) {
    rb_gpio_set_direction(6U, RB_GPIO_OUTPUT, RB_GPIO_PULLNONE, RB_GPIO_DRIVE5MA);

    while (1) {
        rb_gpio_set_level(6U, RB_GPIO_HIGH);
        vTaskDelay(pdMS_TO_TICKS(1000));
        rb_gpio_set_level(6U, RB_GPIO_LOW);
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
