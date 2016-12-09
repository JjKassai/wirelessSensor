#ifndef PERIPHERALCONFIGURATION_H
#define	PERIPHERALCONFIGURATION_H


#include <xc.h>


#define _XTAL_FREQ 4000000


void configureClock(void);
void configureGPIO(void);
void configureI2C(void);
void configureUART(void);
void putch(unsigned char byte);


#endif	/* PERIPHERALCONFIGURATION_H */
