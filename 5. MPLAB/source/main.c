// fuseConfiguration must be included before any other project includes
#include "fuseConfiguration.h"

#include <xc.h>
#include <stdio.h>
#include <stdint.h>
#include "esp8266.h"
#include "hdc1080.h"
#include "peripheralConfiguration.h"

void main(void) 
{
    float temperature;
    float humidity;
    
    int8_t tempInt;
    int8_t humiInt;
    
    uint16_t *hdc1080SerialNumber;
    
    // Initialize peripherals
    configureClock();
    configureInterrupts();
    configureGPIO();
    configureUART();
    configureI2C();
    
    hdc1080WriteConfiguration(0xFFFF);
    hdc1080SerialNumber = hdc1080ReadSerialID();
        
    while(1)
    {
        temperature = hdc1080ReadTemperature();
        humidity = hdc1080ReadHumidity();
        tempInt = (int8_t)temperature;
        humiInt = (int8_t)humidity;
        // Add ESP8266 Web Server Code Here
    }
    return;
}
