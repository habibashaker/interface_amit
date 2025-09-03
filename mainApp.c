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
#include "lcd8.h"
#include <string.h>



/*
 * 
 */
int main() {
    LCD8_init();
    
    LCD8_char('A');
    
    LCD8_char(' ');
    
    LCD8_num(2515);
    
    LCD8_char(' ');
    
    char str[]="hey u";
    LCD8_str(str);
    

    return (EXIT_SUCCESS); //ctrl to go to file
}

