idf_component_register(SRCS "button_poll_main.c" "functions.c" "gpioinitialise.c" "button_interupt_main.c"
                    INCLUDE_DIRS "."
                    REQUIRES esp_driver_gpio
)
