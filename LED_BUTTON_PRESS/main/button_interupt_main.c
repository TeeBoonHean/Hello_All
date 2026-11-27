#include <stdio.h>
#include "driver/gpio.h"
#include "gpioinitialise.h"
#include "functions.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

//Define pins
#define led_pin GPIO_NUM_33
#define button_pin GPIO_NUM_32

//ISR
void button_press_isr(void *arg){
    led_on(led_pin);
}


void app_main(void){
    button_init(button_pin);
    led_init(led_pin);

    led_off(led_pin);

    // Install ISR
    gpio_install_isr_service(0);

    //Register ISR to GPIO
    gpio_isr_handler_add(
        button_pin,
        button_press_isr,
        NULL
    );
}
