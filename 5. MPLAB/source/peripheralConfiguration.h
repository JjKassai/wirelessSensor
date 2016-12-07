#ifndef PERIPHERALCONFIGURATION_H
#define	PERIPHERALCONFIGURATION_H


#include <xc.h>


void configureClock(void);
void configureGPIO(void);
void configureI2C(void);
void configureUART(void);
void putch(unsigned char byte);


#endif	/* PERIPHERALCONFIGURATION_H */
