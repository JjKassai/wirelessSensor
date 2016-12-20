#include "interrupts.h"
#include "globalVariables.h"
#include "peripheralConfiguration.h"

void interrupt interruptHandler(void)
{
    if(PIR1bits.RCIF)
    {
        previousCharacter = receivedCharacter;
        receivedCharacter = RCREG;
        PIR1bits.RCIF = 0;
    }
}

void configureInterrupts(void)
{
    INTCONbits.PEIE   = 1;     // Turn on peripheral interrupts
    INTCONbits.TMR0IE = 0;     // Turn off the Timer 1 interrupt
    INTCONbits.INTE   = 0;     // Turn off the external interrupt    
}

inline void disableGlobalInterrupts(void)
{
    INTCONbits.GIE = 0;
}

inline void enableGlobalInterrupts(void)
{
    INTCONbits.GIE = 1;
    PIR1=0;                 // Clear out any stale flags
}

inline void enableUART_RXInterrupts(void)
{
    PIE1bits.RCIE = 1;
    PIR1bits.RCIF = 0;
}
