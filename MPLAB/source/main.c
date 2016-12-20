// fuseConfiguration must be included before any other project includes
#include "fuseConfiguration.h"

#include <xc.h>
#include <stdio.h>
#include <stdint.h>
#include "esp8266.h"
#include "globalVariables.h"
#include "hdc1080.h"
#include "interrupts.h"
#include "peripheralConfiguration.h"


#define UPDATE_PERIOD 1000


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
        updateOutputs();
        while(1)
        {
            if(receivedCharacter == ',' && previousCharacter == 'D')
            {
                __delay_ms(1000);
                serveClient(0);
                __delay_ms(500);
            }
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
    __delay_ms(UPDATE_PERIOD);
}

void serveClient(uint8_t linkID)
{
    printf("AT+CIPSEND=%u,15\r\n", linkID);
    __delay_ms(50);
    printf("This is a test.", linkID);
    __delay_ms(50);
    printf("AT+CIPCLOSE=%u\r\n", linkID);
    __delay_ms(50);
}