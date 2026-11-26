idf_component_register(SRCS "main.c" "functions.c" "gpioinitialise.c"
                    INCLUDE_DIRS "."
                    REQUIRES esp_driver_gpio
)
