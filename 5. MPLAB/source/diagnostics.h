#ifndef DIAGNOSTICS_H
#define	DIAGNOSTICS_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdio.h>
#include <stdint.h>
#include "peripheralConfiguration.h"


#define TEST_DELAY 50

// Variables for this module
uint8_t temp;

// Function prototypes
void testUART(void);

#endif	/* DIAGNOSTICS_H */

