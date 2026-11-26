idf_component_register(
    SRCS 
        "main.c"
        # "bot_controller.c"
    
    INCLUDE_DIRS 
        "."
    
    REQUIRES
        # rb_bsp
        rb_gpio_driver
        # rb_i2c_driver
        # rb_motor_driver
        # rb_vl53l0x_driver
        # rb_ble_comms
)
