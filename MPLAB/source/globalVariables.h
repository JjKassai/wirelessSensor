#ifndef GLOBALVARIABLES_H
#define	GLOBALVARIABLES_H

#include <stdint.h>

float temperature;
float humidity;

int8_t tempInt;
uint8_t humiInt;

uint16_t hdc1080DevID;
uint16_t hdc1080MFGID;
uint16_t hdc1080Config;

uint8_t diagCount = 0;

volatile char receivedCharacter[4];

volatile char interruptUpdateFlag;

#endif	/* GLOBALVARIABLES_H */

