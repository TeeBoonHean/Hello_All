#include "driver/gpio.h"
#include "gpioinitialise.h"

void button_init(gpio_num_t button_pin){
    gpio_reset_pin(button_pin);
    gpio_config_t ioconfig={
        .pin_bit_mask=(1ULL<<button_pin),
        .mode=GPIO_MODE_INPUT,
        .pull_up_en= GPIO_PULLUP_ENABLE,
        .pull_down_en=  GPIO_PULLDOWN_DISABLE,
        .intr_type=GPIO_INTR_NEGEDGE
    };
    gpio_config(&ioconfig);
}

void led_init(gpio_num_t led_pin){
    gpio_reset_pin(led_pin);
    gpio_config_t ioconfig={
        .pin_bit_mask=1ULL<<led_pin,
        .mode=GPIO_MODE_OUTPUT,
        .pull_up_en=GPIO_PULLUP_DISABLE,
        .pull_down_en= GPIO_PULLDOWN_DISABLE,
        .intr_type=GPIO_INTR_DISABLE
    };
    gpio_config(&ioconfig);
}