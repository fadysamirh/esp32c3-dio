/* Blink Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"
#include "Drivers/DIO Driver/dio.h"
#include "Drivers/LED Driver/led.h"
#include "Drivers/BUTTON Driver/button.h"
#include "esp_log.h"

void app_main(void)
{
    uint8_t button_one_state;
    uint8_t button_two_state;
    BUTTON_init(BUTTON_ONE);
    BUTTON_init(BUTTON_TWO);
    LED_init(LED_ONE);
    LED_init(LED_TWO);

    while (1) {
        BUTTON_read(BUTTON_ONE,&button_one_state);
        BUTTON_read(BUTTON_TWO,&button_two_state);
        if(button_one_state==1){
            LED_on(LED_ONE);
        }else{
            LED_off(LED_ONE);

        }
        if(button_two_state==0){
            LED_on(LED_TWO);
        }else{
            LED_off(LED_TWO);

        }
//        vTaskDelay(5000/portTICK_PERIOD_MS);
    }
}
