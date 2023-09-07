//
// Created by Fady Yassa on 07/09/2023.
//

#ifndef ESP_PROJECT_BUTTON_H
#define ESP_PROJECT_BUTTON_H
#include "driver/gpio.h"
#include "../DIO Driver/dio.h"
#define BUTTON_ONE GPIO_NUM_6
#define BUTTON_TWO GPIO_NUM_7
void BUTTON_init(gpio_num_t ledPin);
void BUTTON_read(gpio_num_t ledPin, uint8_t *value);
#endif //ESP_PROJECT_BUTTON_H
