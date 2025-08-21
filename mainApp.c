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
#include "Keypad.h"

#define F_CPU 16000000UL
#include <util/delay.h>

/*
 * 
 */
int main() {
    init_LEDS();
    keypad_init();
    
    char key;
    
    while(1){
        key = keypad_read();
        switch(key){
            case '1':
                led_on(LED1);
                _delay_ms(200);
                led_off(LED1);
                break;
            case '2':
                led_on(LED1);
                led_on(LED2);
                _delay_ms(200);
                led_off(LED1);
                led_off(LED2);
                break;
            case '3':
                led_on(LED1);
                led_on(LED2);
                led_on(LED3);
                _delay_ms(200);
                led_off(LED1);
                led_off(LED2);
                led_off(LED3);
                break;
            case '4':
                led_on(LED1);
                led_on(LED2);
                led_on(LED3);
                led_on(LED4);
                _delay_ms(200);
                led_off(LED1);
                led_off(LED2);
                led_off(LED3);
                led_off(LED4);
                break;
        }
    }
    //buttons_init();
    /*led_on(LED1);
    _delay_ms(500);
    led_off(LED1);
    _delay_ms(500);
    led_toggle(LED1);

    led_on_all();
    _delay_ms(500);
    led_off_all();
    _delay_ms(500);*/
    /*char prevState = 0;
    while (1) {
        char currentState = isPressed();

        // Detect rising edge (button just pressed)
        if (currentState && !prevState) {
            led_toggle_all();
            _delay_ms(500); // debounce delay
        }

        prevState = currentState; // update state
    }*/






    return (EXIT_SUCCESS); //ctrl to go to file
}

