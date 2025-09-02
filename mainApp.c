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
#include "lcd4.h"



/*
 * 
 */
int main() {
    
    LCD4_init();
    LCD4_data('H');
    LCD4_data('A');
    LCD4_data('B');
    LCD4_data('I');
    LCD4_data('B');
    LCD4_data('A');
    LCD4_data('2');
    LCD4_data('5');
    
    
    

    return (EXIT_SUCCESS); //ctrl to go to file
}

