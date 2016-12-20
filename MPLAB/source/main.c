// fuseConfiguration must be included before any other project includes
#include "fuseConfiguration.h"

#include <xc.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "esp8266.h"
#include "globalVariables.h"
#include "hdc1080.h"
#include "interrupts.h"
#include "peripheralConfiguration.h"


#define RESPONSE_BUFFER_SIZE 25


void updateOutputs(void);
void serveClient(uint8_t linkID);

void main(void) 
{       
    // Initialize peripherals
    configureClock();
    configureInterrupts();
    configureGPIO();
    configureUART();
    configureI2C();
    
    enableGlobalInterrupts();          // Enable the interrupts before starting the ESP8266 to avoid overrun
    enableUART_RXInterrupts();
    
    __delay_ms(7500);                  // Delay for the module to start - trim down later
    esp8266StartServer(333);
    
    while(1)
    {
        if(receivedCharacter[0] == ',' && receivedCharacter[1] == 'D' && receivedCharacter[2] == 'P' && receivedCharacter[3] == 'I')
        {
            updateOutputs();
            __delay_ms(500);
            serveClient(0);
            __delay_ms(500);
        }
    }
    return;
}

void updateOutputs(void)
{
    temperature = hdc1080ReadTemperature();
    humidity = hdc1080ReadHumidity();
    tempInt = (int8_t)temperature;
    humiInt = (uint8_t)humidity;
}

void serveClient(uint8_t linkID)
{
    static char response[RESPONSE_BUFFER_SIZE] = "This is a test\r\n";
    static uint8_t responseLength;
    responseLength = strlen(response);
    printf("AT+CIPSEND=%u,%u\r\n", linkID, responseLength);
    __delay_ms(50);
    printf("This is a test.", linkID);
    __delay_ms(50);
    printf("AT+CIPCLOSE=%u\r\n", linkID);
    __delay_ms(50);
}