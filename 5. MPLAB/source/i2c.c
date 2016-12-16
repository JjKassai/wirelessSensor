#include "i2c.h"

void i2cInitiateStartCondition(void)
{
    SSP1CON2bits.SEN = 1;
    while(!SSP1IF);
    SSP1IF = 0;
}

void i2cInitiateStopCondition(void)
{
    SSP1CON2bits.PEN = 1;
    while (!SSP1IF);
    SSP1IF = 0;
}

void i2cInitiateRestartCondition(void)
{
    SSP1CON2bits.RSEN = 1;
    while (!SSP1IF);
    SSP1IF = 0;
}

uint8_t i2cTransmit(uint8_t transmitValue)
{
    SSP1BUF = transmitValue;
    while(!SSP1IF);
    SSP1IF = 0;
    return SSP1CON2bits.ACKSTAT;
}

uint8_t i2cReceive(uint8_t ackFlag)
{
    SSP1CON2bits.ACKDT = ackFlag;
    SSP1CON2bits.RCEN = 1;
    while(!SSP1IF);
    SSP1IF = 0;
    SSP1CON2bits.ACKEN = 1;
    while(!SSP1IF);
    SSP1IF = 0;
    return SSP1BUF;
}

uint16_t i2cReadValue16(uint8_t deviceAddress, uint8_t registerValue)
{    
    static uint16_t returnValue;
    i2cInitiateStartCondition();             // Start condition
    i2cTransmit(deviceAddress << 1);         // Transmit address + write
    i2cTransmit(registerValue);              // Transmit register pointer
    
    i2cInitiateRestartCondition();           // Restart condition
    
    i2cTransmit((deviceAddress << 1) + 1);   // Transmit address + read
    returnValue = i2cReceive(0);             // Receive the first byte, acknowledge
    returnValue = returnValue << 8;          // Shift over the MSBs
    
    returnValue += i2cReceive(1);            // Receive the second byte, nack
    
    i2cInitiateStopCondition();
    
    return returnValue;
}

uint32_t i2cReadValue32(uint8_t deviceAddress, uint8_t registerValue)
{
    static uint32_t returnValue;
    i2cInitiateStartCondition();             // Start condition
    i2cTransmit(deviceAddress << 1);         // Transmit address + write
    i2cTransmit(registerValue);              // Transmit register pointer
    
    i2cInitiateRestartCondition();           // Restart condition
    
    i2cTransmit((deviceAddress << 1) + 1);   // Transmit address + read
    returnValue = i2cReceive(0);             // Receive the first byte, acknowledge
    returnValue = returnValue << 8;          // Shift over the MSBs
    returnValue += i2cReceive(0);            // Receive the second byte, acknowledge
    returnValue = returnValue << 8;
    returnValue += i2cReceive(0);
    returnValue = returnValue << 8;
    returnValue += i2cReceive(1);
        
    i2cInitiateStopCondition();
    
    return returnValue;
}