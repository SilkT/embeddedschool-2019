/*
 * drvLED.c
 *
 *  Created on: 7 лист. 2019 р.
 *      Author: Local user Profile
 */

#include "drvLED.h"

led_t led[LED_Count] = {
    //declare the structure with ports and pins for every of the four user_LEDs
    {GPIOD, 15}, // Blue LED
    {GPIOD, 14}, // Red LED
    {GPIOD, 13}, // Orange LED
    {GPIOD, 12}  // Green LED
};

void drvLED_on(ledlist_t LED_name)
{
    HAL_GPIO_WritePin(led[LED_name].LED_port, led[LED_name].LED_pin, GPIO_PIN_SET);
};

void drvLED_off(ledlist_t LED_name)
{
    HAL_GPIO_WritePin(led[LED_name].LED_port, led[LED_name].LED_pin, GPIO_PIN_RESET);
};
