#ifndef INTERRUPTS_H
#define	INTERRUPTS_H


#include <xc.h>


void configureInterrupts(void);
inline void disableGlobalInterrupts(void);
inline void enableGlobalInterrupts(void);


#endif	/* INTERRUPTS_H */

