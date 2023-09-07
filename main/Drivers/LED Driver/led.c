#include "led.h"
uint8_t gpioStates[22] = {0};
void LED_init(gpio_num_t ledPin){
    DIO_init(ledPin,GPIO_MODE_OUTPUT);
}
void LED_on(gpio_num_t ledPin){
    DIO_write(ledPin,1);
    gpioStates[ledPin]=1;
}
void LED_off(gpio_num_t ledPin){
    DIO_write(ledPin,0);
    gpioStates[ledPin]=0;

}
void LED_toggle(gpio_num_t ledPin){
    DIO_write(ledPin,!gpioStates[ledPin]);
    gpioStates[ledPin]=!gpioStates[ledPin];
}