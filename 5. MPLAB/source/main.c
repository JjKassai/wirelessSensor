// fuseConfiguration must be included before any other project includes
#include "fuseConfiguration.h"

#include <xc.h>
#include "peripheralConfiguration.h"

void main(void) 
{
    configureClock();
    configureGPIO();
    configureUART();
    configureI2C();
    
    while(1)
    {
        // This space intentionally left blank
    }
    return;
}
