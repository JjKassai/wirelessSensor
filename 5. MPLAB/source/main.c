// fuseConfiguration must be included before any other project includes
#include "fuseConfiguration.h"

#include <xc.h>
#include <stdio.h>
#include <stdint.h>
#include "diagnostics.h"
#include "esp8266.h"
#include "hdc1080.h"
#include "i2c.h"
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
        
    while(1)
    {
        testHDC1080();
        __delay_ms(3000);
    }
    return;
}
