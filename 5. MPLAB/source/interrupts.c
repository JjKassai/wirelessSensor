#include "interrupts.h"


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
}
