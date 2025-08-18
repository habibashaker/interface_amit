/* 
 * File:   mainApp.c
 * Author: Hab
 *
 * Created on August 8, 2025, 8:45 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <avr/io.h>

#include "led.h"

#define F_CPU 16000000UL
#include <util/delay.h>

/*
 * 
 */
int main() {
    init_LEDS();
    led_on(LED1);
    _delay_ms(500);
    led_off(LED1);
    _delay_ms(500);
    led_toggle(LED1);

    led_on_all();
    _delay_ms(500);
    led_off_all();
    _delay_ms(500);
    while (1) {
        led_toggle_all();
        _delay_ms(500);
        
    }
    
    return (EXIT_SUCCESS); //ctrl to go to file
}

