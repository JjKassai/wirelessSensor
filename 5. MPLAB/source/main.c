// fuseConfiguration must be included before any other project includes
#include "fuseConfiguration.h"

#include <xc.h>
#include <stdio.h>
#include <stdint.h>
#include "esp8266.h"
#include "hdc1080.h"
#include "i2c.h"
#include "peripheralConfiguration.h"

void main(void) 
{
    float temperature;
    float humidity;
    
    uint16_t tempInt;
    uint16_t humiInt;
    
    // Initialize peripherals
    configureClock();
    configureInterrupts();
    configureGPIO();
    configureUART();
    configureI2C();
        
    while(1)
    {
        hdc1080ReadTemperature();
    }
    return;
}
