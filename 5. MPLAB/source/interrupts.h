#ifndef INTERRUPTS_H
#define	INTERRUPTS_H

void configureInterrupts(void);
inline void enableGlobalInterrupts(void);
inline void disableGlobalInterrupts(void);


void configureInterrupts(void)
{
    INTCONbits.PEIE   = 1;     // Turn on peripheral interrupts
    INTCONbits.TMR0IE = 0;     // Turn off the Timer 1 interrupt
    INTCONbits.INTE   = 0;     // Turn off the external interrupt
}

inline void enableGlobalInterrupts(void)
{
    INTCONbits.GIE = 1;
}

inline void disableGlobalInterrupts(void)
{
    INTCONbits.GIE = 0;
}

#endif	/* INTERRUPTS_H */

