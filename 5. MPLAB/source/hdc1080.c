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

uint16_t readDeviceID(void)
{
    static uint16_t result;
    result = 0;
    return result;
}

uint16_t readSerialID(void)
{
    static uint16_t result;
    result = 0;
    return result;
}
uint16_t readMfgID(void)
{
    static uint16_t result;
    result = 0;
    return result;
}

uint16_t writeConfiguration(uint16_t configurationValue)
{
    static uint16_t result;
    result = 0;
    return result;
}
