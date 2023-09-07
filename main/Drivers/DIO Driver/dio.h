#ifndef DIO_H
#define DIO_H
// all internal driver typedefs
// all driver macros
// all driver func†ion prototypes
void DIO_init(gpio_num_t gpioNumber, gpio_mode_t gpioMode);
void DIO_write(gpio_num_t gpioNumber, uint8_t value);
void DIO_toggle(gpio_num_t gpioNumber);
void DIO_read(gpio_num_t gpioNumber, uint8_t* value);
#endif