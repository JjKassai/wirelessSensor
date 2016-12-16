#include "diagnostics.h"
#include "hdc1080.h"

void testUART(void)
{
    while(!RCIF);
    RCIF=0;
    printf("Character recieved: ");
    putch(RCREG);
    printf("\r\n");
}
