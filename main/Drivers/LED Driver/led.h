//
// Created by Fady Yassa on 06/09/2023.
//

#ifndef ESP_PROJECT_LED_H
#define ESP_PROJECT_LED_H
#include "driver/gpio.h"
#include "../DIO Driver/dio.h"
#define LED_ONE GPIO_NUM_4
#define LED_TWO GPIO_NUM_5
void LED_init(gpio_num_t ledPin);
void LED_on(gpio_num_t ledPin);
void LED_off(gpio_num_t ledPin);
void LED_toggle(gpio_num_t ledPin);
#endif //ESP_PROJECT_LED_H
