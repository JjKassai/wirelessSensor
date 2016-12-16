#include <xc.h>
#include "peripheralConfiguration.h"


void configureClock(void)
{
    OSCCONbits.IRCF = 0b1101;          // Configure the internal clock for 4 MHz HF
}

void configureGPIO(void)
{
    APFCON0bits.RXDTSEL = 0;            // UART RX on RC5 (default)
    APFCON0bits.TXCKSEL = 0;            // UART TX on RC4 (default)
}

void configureI2C(void)
{
    SSP1CON1bits.SSPM = 0b1000;        // Select I2C Master Mode
    SSP1ADD = 0x27;                    // ~100kHz Clock per PIC datasheet table
    SSP1CON1bits.SSPEN = 1;            // Enable the hardware
}

void configureUART(void)
{
    // Transmit status and control
    TXSTAbits.TXEN = 1;           // Enable transmitter
    TXSTAbits.BRGH = 1;           // High speed baud rate selection
    
    // Receive status and control
    RCSTAbits.SPEN = 1;           // Configure TX/RX pins for serial port use
    RCSTAbits.CREN = 1;           // Enable receiver
    
    // Baud rate control
    BAUDCONbits.BRG16 = 1;        // Use 16-bit baud generation
    SPBRGL = 0x8;                 // Per table, SPBRG = 8 for 115.2k @ 4MHz Fosc
    SPBRGH = 0b0;
}

void putch(unsigned char byte)
{
    TXREG = byte;
    while(!TXIF)
    {
        // Wait for the transmit buffer to empty
    }
    TXIF = 0;
}
