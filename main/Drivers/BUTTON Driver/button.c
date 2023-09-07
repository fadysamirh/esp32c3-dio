//
// Created by Fady Yassa on 07/09/2023.
//
#include "button.h"
void BUTTON_init(gpio_num_t ledPin){
    DIO_init(ledPin,GPIO_MODE_INPUT);
}
void BUTTON_read(gpio_num_t ledPin, uint8_t *value){
    DIO_read(ledPin,value);
}