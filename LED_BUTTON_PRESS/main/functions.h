#ifndef FUNCTION_H
#define FUNCTION_H

#include "driver/gpio.h"

void led_on(gpio_num_t led_pin);
int button_pressed(gpio_num_t button_pin);
void led_off(gpio_num_t led_pin);

#endif
