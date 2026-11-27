idf_component_register(
    SRCS 
        "main.c"
        # VV add the files l8r one VV
        # "gpio-driver.c"
        # "i2c-driver.c"
        # "motor-driver.c"
        # "status-indicator.c"
        # "vl53l0x-driver.c"
        # "ble-comms.c"
        # "bot-controller.c"
    
    INCLUDE_DIRS 
        "."
)
