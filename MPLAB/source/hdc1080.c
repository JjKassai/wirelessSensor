#include "hdc1080.h"
#include "i2c.h"

// Function definitions related to this component
float hdc1080ReadTemperature(void)
{
    static float result;
    result = (float)i2cReadValue16(HDC1080Registers.i2cAddress, HDC1080Registers.temperature);
    result *= RECIP_2TOTHE16;
    result *= 165;
    result -= 40;
    return result;
}

float hdc1080ReadHumidity(void)
{
    static float result;
    result = (float)i2cReadValue16(HDC1080Registers.i2cAddress, HDC1080Registers.humidity);
    result *= RECIP_2TOTHE16;
    result *= 100;
    return result;
}

uint16_t hdc1080ReadDeviceID(void)
{
    static uint16_t result;
    result = i2cReadValue16(HDC1080Registers.i2cAddress, HDC1080Registers.devID);
    return result;
}

uint16_t *hdc1080ReadSerialID(void)
{
    static uint16_t result[3];
    result[0] = i2cReadValue16(HDC1080Registers.i2cAddress, HDC1080Registers.serialID1);
    result[1] = i2cReadValue16(HDC1080Registers.i2cAddress, HDC1080Registers.serialID2);
    result[2] = i2cReadValue16(HDC1080Registers.i2cAddress, HDC1080Registers.serialID3);
    return result;
}
uint16_t hdc1080ReadMfgID(void)
{
    static uint16_t result;
    result = i2cReadValue16(HDC1080Registers.i2cAddress, HDC1080Registers.mfgID);
    return result;
}

uint16_t hdc1080WriteConfiguration(uint16_t configurationValue)
{
    static uint16_t result;
    static uint8_t config[2];
    
    config[0] = (uint8_t)(configurationValue >> 8);                             // Split up the word into two bytes
    config[1] = (uint8_t)(configurationValue && 0xFF);
    
    i2cWriteValue16(HDC1080Registers.i2cAddress, HDC1080Registers.configuration, config[0], config[1]);
    result = i2cReadValue16(HDC1080Registers.i2cAddress, HDC1080Registers.configuration);
    return result;
}

uint16_t hdc1080ReadConfiguration(void)
{
    static uint16_t result;
    result = i2cReadValue16(HDC1080Registers.i2cAddress, HDC1080Registers.configuration);
    return result;
}
