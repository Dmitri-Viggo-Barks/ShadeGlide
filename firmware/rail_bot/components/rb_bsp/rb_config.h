/*
Sections: add "TODO" if not configured, add "COMMENT" if comments are in it
1. Hardware Config
2. I2C Config   ----    ----    ----    COMMENT
3. ToF Sensor Config
4. Motor Driver Config
5. Status LED Config
6. BLE Config   ----    ----    ----    TODO
7. Application Config   ----    ----    TODO
*/

#ifndef RB_CONFIG_H
#define RB_CONFIG_H

// Hardware Config
#define BOT_I2C_SDA_GPIO					4
#define BOT_I2C_SCL_GPIO 					3

#define BOT_TOF_1_XSHUT_GPIO 				1
#define BOT_TOF_2_XSHUT_GPIO 				0

#define BOT_MD_IN1_GPIO 					20
#define BOT_MD_IN2_GPIO 					21
#define BOT_MD_SLEEP_GPIO 					5

#define BOT_STATLED_GPIO 					10

// I2C Config
#define BOT_I2C_FREQUENCY_HZ 				100000U
// COMMENT: Test if 400kHz could be used, since there are 2 VL53L0X sensors...

#define BOT_TOF_DEF_ADDR 					0x29U

// ToF Sensor Config
#define BOT_TOF_XSHUT_EN 					1
#define BOT_TOF_XSHUT_DIS 					0

// Motor Driver Config
#define BOT_MD_EN 							1
#define BOT_MD_SLEEP 						0

// Status LED Config
#define BOT_LED_ON 							1
#define BOT_LED_OFF 						0

// BLE Config

/*
    Configure when making the BLE communication,
    still learning how to configure at the moment

    TODO: Learn BLE
*/

// Application Config

/*
    Configure in the future

    TODO: Determine obstruction detection range thresholds
    TODO: Implement movement testing observation things
    TODO: BLE use after BLE Config and BLE Communication
    TODO: Determine sensor polling rate

*/

#endif