// fuseConfiguration must be included before any other project includes
#include "fuseConfiguration.h"

#include <xc.h>
#include <stdio.h>
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
    
    printf("Test");
    
    while(1)
    {
        // This space intentionally left blank
    }
    return;
}
