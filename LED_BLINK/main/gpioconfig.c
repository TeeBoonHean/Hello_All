#include "driver/gpio.h"
#include "gpioconfig.h"

void gpio_init(gpio_num_t gpio_pin){

gpio_config_t gpio_init ={
    .pin_bit_mask= (1ULL << gpio_pin),
    .mode= GPIO_MODE_OUTPUT,
    .pull_up_en= GPIO_PULLUP_DISABLE,
    .pull_down_en= GPIO_PULLDOWN_DISABLE,
    .intr_type=GPIO_INTR_DISABLE
} ;

gpio_config(&gpio_init);
}