#include <stdio.h>
#include "gpioconfig.h"
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define gpio_pin GPIO_NUM_33

void app_main(void)
{
    gpio_reset_pin(gpio_pin);

    gpio_init(gpio_pin);

    while(1){
    gpio_set_level(gpio_pin, 1 );
    vTaskDelay(pdMS_TO_TICKS(1000));
    gpio_set_level(gpio_pin, 0 );
    vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
