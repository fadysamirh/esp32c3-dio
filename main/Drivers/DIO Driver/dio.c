#include "driver/gpio.h"
#include "esp_log.h"
#include "dio.h"

void DIO_init(gpio_num_t gpioNumber, gpio_mode_t gpioMode) {
    ESP_LOGI("DIO", "Configured GPIO PIN %d to %s MODE!", gpioNumber,
             gpioMode == GPIO_MODE_OUTPUT ? "OUTPUT" : "INPUT");
    gpio_reset_pin(gpioNumber);
    /* Set the GPIO as a push/pull output */
    gpio_set_direction(gpioNumber, gpioMode);

}

void DIO_write(gpio_num_t gpioNumber, uint8_t value) {
    ESP_LOGI("DIO", "WROTE ON GPIO PIN %d VALUE %s!", gpioNumber, value ? "HIGH" : "LOW");
    gpio_set_level(gpioNumber, value);
}


void DIO_read(gpio_num_t gpioNumber, uint8_t *value) {
    *value = gpio_get_level(gpioNumber);
    ESP_LOGI("DIO", "READ FROM GPIO PIN %d VALUE %s!", gpioNumber, *value ? "HIGH" : "LOW");
}
