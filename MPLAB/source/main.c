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


#define RESPONSE_BUFFER_SIZE 200


void updateOutputs(void);
void serveClient(uint8_t linkID);

void main(void) 
{   
    uint8_t currentLinkID;
    
    // Initialize peripherals
    configureClock();
    configureInterrupts();
    configureGPIO();
    configureUART();
    configureI2C();
    
    enableGlobalInterrupts();          // Enable the interrupts before starting the ESP8266 to avoid overrun
    enableUART_RXInterrupts();
    
    hdc1080WriteConfiguration(0x00);
    
    __delay_ms(5000);                  // Delay for the module to start - trim down later
    esp8266StartServer(333);
    
    while(1)
    {
        if(receivedCharacter[0] == ',' && receivedCharacter[1] == 'D' && receivedCharacter[2] == 'P' && receivedCharacter[3] == 'I')
        {
            while(receivedCharacter[0] == ',');
            currentLinkID = receivedCharacter[0] - 48;
            updateOutputs();
            __delay_ms(500);
            serveClient(currentLinkID);
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
    
    hdc1080DevID = hdc1080ReadDeviceID();
    hdc1080MFGID = hdc1080ReadMfgID();
    hdc1080Config = hdc1080ReadConfiguration();
}

void serveClient(uint8_t linkID)
{
    static char response[RESPONSE_BUFFER_SIZE];
    static uint8_t responseLength;
    
    sprintf(response, "Temperature: %03i\r\nHumidity: %03u\r\nDevice ID: %x\r\nMFG ID: %x\r\nConfig: %x", tempInt, humiInt, hdc1080DevID, hdc1080MFGID, hdc1080Config);
    responseLength = strlen(response);
    
    printf("AT+CIPSEND=%u,%u\r\n", linkID, responseLength);
    __delay_ms(50);
    
    printf(response);
    __delay_ms(250);
    
    printf("AT+CIPCLOSE=%u\r\n", linkID);
}
