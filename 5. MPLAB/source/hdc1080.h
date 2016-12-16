#ifndef HDC1080_H
#define	HDC1080_H


#define RECIP_2TOTHE16 0.000015259


// Includes used in this module
#include <stdint.h>


// Constants and Defines related to this component

// Types related to this component
typedef struct {
    uint8_t i2cAddress;
    uint8_t temperature;
    uint8_t humidity;
    uint8_t configuration;
    uint8_t serialID1;
    uint8_t serialID2;
    uint8_t serialID3;
    uint8_t mfgID;
    uint8_t devID;
} HDC1080Registers_t;

typedef enum {
    IDLE,
    START,
    ADDRESS,
    NACK,
    STOP
} i2cStates_t;


// Variables and constants related to this component
const HDC1080Registers_t HDC1080Registers = {0x40, 0x00, 0x01, 0x02, 0x0FB, 0xFC, 0xFD, 0xFE, 0xFF};
i2cStates_t currentI2CState = IDLE;
i2cStates_t nextI2CState = START;

// Function prototypes related to this component
float hdc1080ReadTemperature(void);
float hdc1080ReadHumidity(void);
uint16_t readDeviceID(void);
uint16_t readSerialID(void);

#endif	/* HDC1080_H */
