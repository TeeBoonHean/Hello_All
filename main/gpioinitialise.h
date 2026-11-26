#ifndef GPIOINITIALISE_H
#define GPIOINITIALISE_H

#include "driver/gpio.h"

void led_init(gpio_num_t led_pin);

void button_init(gpio_num_t button_pin);

#endif