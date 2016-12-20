#ifndef INTERRUPTS_H
#define	INTERRUPTS_H


#include <xc.h>


void interrupt interruptHandler(void);
void configureInterrupts(void);
inline void disableGlobalInterrupts(void);
inline void enableGlobalInterrupts(void);
inline void enableUART_RXInterrupts(void);


#endif	/* INTERRUPTS_H */

