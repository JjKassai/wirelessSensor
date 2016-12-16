#ifndef I2C_H
#define	I2C_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h>

// Internal functions
void i2cInitiateStartCondition(void);
void i2cInitiateStopCondition(void);
void i2cInitiateRestartCondition(void);
uint8_t i2cTransmit(uint8_t transmitValue);
uint8_t i2cReceive(uint8_t ackFlag);

// Public functions
uint16_t i2cReadValue16(uint8_t deviceAddress, uint8_t registerAddress);
uint32_t i2cReadValue32(uint8_t deviceAddress, uint8_t registerAddress);
void i2cWriteValue16(uint8_t deviceAddress, uint8_t registerAddress, uint8_t registerValueUpper, uint8_t registerValueLower);

#endif	/* I2C_H */

