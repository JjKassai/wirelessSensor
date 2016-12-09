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

void testHDC1080(void)
{
    while(!RCIF);
    RCIF = 0;
    printf("Issuing start condition\r\n");
    SSP1CON2bits.SEN = 1;
    while(!SSP1IF);
    SSP1IF = 0;
    
    printf("Issuing write address\r\n");
    SSP1BUF = writeAddress;
    while(!SSP1IF);
    SSP1IF = 0;
    
    printf("Issuing pointer address\r\n");
    SSP1BUF = HDC1080Registers.devID;
    
    printf("Issuing stop condition\r\n");
    SSP1CON2bits.PEN = 1; // Issue a stop
    while(!SSP1IF);
    SSP1IF = 0;
    
    printf("Issuing a start condition\r\n");
    SSP1CON2bits.SEN = 1;
    while(!SSP1IF);
    SSP1IF = 0;
    
    printf("Issuing read address\r\n");
    SSP1BUF = readAddress;
    while(!SSP1IF);
    SSP1IF = 0;
    
    SSP1CON2bits.RCEN = 1;
    while(!SSP1IF);
    temp = SSP1BUF;
    SSP1CON2bits.ACKDT = 0;
    SSP1CON2bits.ACKEN = 1;
    while(!SSP1IF);
    SSP1IF = 0;
    printf("Return value 1 was %x\r\n", temp);
    
    SSP1CON2bits.RCEN = 1;
    while(!SSP1IF);
    temp = SSP1BUF;
    SSP1CON2bits.ACKDT = 0;
    SSP1CON2bits.ACKEN = 1;
    while(!SSP1IF);
    SSP1IF = 0;
    printf("Return value 2 was %x\r\n", temp);
    
    SSP1CON2bits.RCEN = 1;
    while(!SSP1IF);
    temp = SSP1BUF;
    SSP1CON2bits.ACKDT = 0;
    SSP1CON2bits.ACKEN = 1;
    while(!SSP1IF);
    SSP1IF = 0;
    printf("Return value 3 was %x\r\n", temp);
    
    SSP1CON2bits.PEN = 1;
    while(!SSP1IF);
    SSP1IF = 0;
}
