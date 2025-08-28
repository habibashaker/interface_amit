/* 
 * File:   mainApp.c
 * Author: Hab
 *
 * Created on August 8, 2025, 8:45 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

#include "led.h"
#include "Keypad.h"
#include "sevenSeg.h"



/*
 * 
 */
int main() {
    init_7Seg();
    while (1){
        for(int i = 0;i<=9;i++){
            _7seg_write(i);
            _delay_ms(500);
        }
    }

    return (EXIT_SUCCESS); //ctrl to go to file
}

