#ifndef ESP8266_H
#define	ESP8266_H

#include <xc.h> // include processor files - each processor file is guarded.  

typedef struct {
    char reset[];
    char info[];
    char deepSleep[];
    char factoryReset[];
    char sleep[];
    char wakeUpGPIO[];
    char wifiMode[];            // Temporarily change mode (volatile)
    char availableSSIDs[];
    char connect[];
} esp8266ATCommands_t;

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

#endif	/* ESP8266_H */

