#ifndef GLOBALVARIABLES_H
#define	GLOBALVARIABLES_H

#include <stdint.h>

float temperature;
float humidity;

int8_t tempInt;
uint8_t humiInt;

uint8_t diagCount = 0;

volatile char receivedCharacter;
volatile char previousCharacter;

volatile char interruptUpdateFlag;

#endif	/* GLOBALVARIABLES_H */

