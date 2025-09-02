#include "lcd4.h"
#include <avr/io.h>
#include "DIO.h"
#include <stdlib.h>

#define F_CPU 16000000UL
#include <util/delay.h>



void LCD4_init(){
    
    //set pins as output
    LCD4_DATA_DIR |= 0xF0; 
    
    setPINB_dir(LCD4_RS_PIN,OUT);
    setPINB_dir(LCD4_E_PIN,OUT);
    
    //LCD4_CTRL_DIR |= (1<<LC4_RS_PIN) | (1<<LC4_E_PIN);
    
    //commands initialization 
    LCD4_cmd(0x02); //initialize 4-bit
    //should i add delay?
    LCD4_cmd(LCD4_4BIT_2LINE); // or LCD4_cmd(LCD4_4BIT_1cLINE);
    
    LCD4_cmd(LCD4_DISPLAY_CTRL);
    
    LCD4_cmd(LCD4_CLEAR_DISPLAY);
    
    LCD4_cmd(LCD4_ENTRY_MODE);
    
    LCD4_cmd(LCD4_RETURN_HOME);
}

void LCD4_enable(){
    setPINB(LCD4_E_PIN,HIGH);
    _delay_ms(5);
    setPINB(LCD4_E_PIN,LOW);
}

void LCD4_cmd(char cmd) {
    //RS --> 0
    setPINB(LCD4_RS_PIN,LOW);
    
    //data (send high nibble)
    LCD4_DATA = (cmd & 0xF0) | (LCD4_DATA & 0x0F);
            
    LCD4_enable();
    
    LCD4_DATA = (cmd << 4) | (LCD4_DATA & 0x0F);
    
    LCD4_enable();

}

void LCD4_data(char data) {
    //RS --> 1
    setPINB(LCD4_RS_PIN,HIGH);
    
    //data (send high nibble)
    LCD4_DATA = (data & 0xF0) | (LCD4_DATA & 0x0F);
            
    LCD4_enable();
    
    LCD4_DATA = (data << 4) | (LCD4_DATA & 0x0F);
    
    LCD4_enable();
}