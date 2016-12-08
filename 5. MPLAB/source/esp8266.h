#ifndef ESP8266_H
#define	ESP8266_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h>

// Defines and Types for this module
#define ATTENTION_CMD "AT"

typedef struct {
    char reset[];
    char info[];
    char deepSleep[];
    char factoryReset[];
    char sleep[];
    char wakeUpGPIO[];
    char wifiMode[];            // This command temporarily (not stored in flash) changes the mode
    char availableSSIDs[];
    char connect[];
} esp8266ATCommands_t;


// Constants and Variables for this module
static const esp8266ATCommands_t esp8266ATCommands = 
{
    "+RST",
    "+GMR",
    "+GSLP",
    "+RESTORE",
    "+SLEEP",
    "+WAKEUPGPIO",
    "+CWMODE_CUR",
    "+CWLAP",
    "+CWJAP"
};


// Prototypes for functions in this module
uint8_t testCommunication(void);
uint8_t reset(void);
uint8_t getInfo(void);
uint8_t deepSleep(void);
uint8_t wakeupGPIO(void);
uint8_t wifiChangeMode(uint8_t newMode);
uint8_t scanSSIDs(void);
uint8_t connect(char SSID[], char password[]);


#endif	/* ESP8266_H */

