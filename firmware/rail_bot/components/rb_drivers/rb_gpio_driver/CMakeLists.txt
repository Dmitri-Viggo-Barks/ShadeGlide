idf_component_register(
    SRCS 
        "rb_gpio_driver.c"
    
    INCLUDE_DIRS 
        "."
    
    PRIV_REQUIRES
        rb_soc
)