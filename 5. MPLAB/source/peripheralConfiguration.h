#ifndef PERIPHERALCONFIGURATION_H
#define	PERIPHERALCONFIGURATION_H

void configureClock(void);
void configureGPIO(void);
void configureI2C(void);
void configureUART(void);


void configureClock(void)
{
    OSCCONbits.IRCF = 0b1111;
}

void configureGPIO(void)
{
    
}

void configureI2C(void)
{
    
}

void configureUART(void)
{
    
}

#endif	/* PERIPHERALCONFIGURATION_H */
