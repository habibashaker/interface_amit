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
#include <string.h>



/*
 * 
 */
int main() {
    
    LCD4_init();
    LCD4_char('H');
    LCD4_char('A');
    LCD4_char('B');
    LCD4_char('I');
    LCD4_char('B');
    LCD4_char('A');
    LCD4_char('2');
    LCD4_char('5');
    
    LCD4_char(' ');
    LCD4_num(112);
    
    LCD4_char(' ');
    
    char str[]="Hi";
    //strncpy()
    LCD4_str(str);
    

    return (EXIT_SUCCESS); //ctrl to go to file
}

