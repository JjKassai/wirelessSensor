// fuseConfiguration must be included before any other project includes
#include "fuseConfiguration.h"

#include <xc.h>
#include <stdio.h>
#include <stdint.h>
#include "esp8266.h"
#include "hdc1080.h"
#include "interrupts.h"
#include "peripheralConfiguration.h"

void main(void) 
{
    // Initialize peripherals
    configureClock();
    configureInterrupts();
    configureGPIO();
    configureUART();
    configureI2C();
    
    while (!RCIF);       // Wait for activity on the UART lines to initialize
    
        
    while(1)
    {
        // This space intentionally left blank
    }
    return;
}
