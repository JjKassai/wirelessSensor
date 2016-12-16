#include "esp8266.h"

uint8_t testCommunication(void)
{
    printf("AT");
}
uint8_t reset(void)
{
    printf(esp8266ATCommands.attention);
    printf(esp8266ATCommands.reset);
}
uint8_t getInfo(void)
{
    printf(esp8266ATCommands.attention);
}
uint8_t deepSleep(void)
{
    
}
uint8_t wakeupGPIO(void)
{
    
}
uint8_t wifiChangeMode(uint8_t newMode)
{
    
}
uint8_t scanSSIDs(void)
{
    
}
uint8_t connect(char SSID[], char password[])
{
    
}