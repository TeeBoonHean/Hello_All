#include <stdio.h>
#include "driver/gpio.h"
#include "gpioinitialise.h"
#include "functions.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

//Define pins

#define led_pin GPIO_NUM_33
#define button_pin GPIO_NUM_32

void app_main(void)
{
    button_init(button_pin);
    led_init(led_pin);

    while(1){
        if (button_pressed(button_pin)==0){
            led_on(led_pin);
        }else{
            led_off(led_pin);
            }
        }
    } 


