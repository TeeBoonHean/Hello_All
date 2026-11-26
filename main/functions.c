#include <stdio.h>
#include "driver/gpio.h"
#include "gpioinitialise.h"


//LED FUNCTION

void led_on(gpio_num_t led_pin){
    gpio_set_level(led_pin, 1);
}

void led_off(gpio_num_t led_pin){
    gpio_set_level(led_pin, 0);
}


//Button Function 
int button_pressed(gpio_num_t button_pin){
    int level= gpio_get_level(button_pin);
    return level;
}   