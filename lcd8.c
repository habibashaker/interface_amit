#include <avr/io.h>
#include "DIO.h"
#include "lcd8.h"
#include <stdlib.h>

#define F_CPU 16000000UL
#include <util/delay.h>

void LCD8_init(){
    //set pins output
    setPORTA_dir(OUT);
    
    setPINB_dir(LCD8_RS_PIN,OUT);
    setPINB_dir(LCD8_E_PIN,OUT);
    
    LCD8_cmd(LCD8_2LINE);
    LCD8_cmd(LCD8_DISPLAY_CTRL);
    LCD8_cmd(LCD8_CLEAR_DISPLAY);
    
    LCD8_cmd(LCD8_ENTRY_MODE);
    
    LCD8_cmd(LCD8_RETURN_HOME);
    
    _delay_ms(50);//why? because clear and return home?
}

void LCD8_enable(){
    setPINB(LCD8_E_PIN,HIGH);
    _delay_ms(5);
    setPINB(LCD8_E_PIN,LOW);
}

void LCD8_cmd(char cmd){
    setPINB(LCD8_RS_PIN,LOW);
    LCD8_DATA = cmd;
    LCD8_enable();
}

void LCD8_char(char data){
    setPINB(LCD8_RS_PIN,HIGH);
    LCD8_DATA = data;
    LCD8_enable();
}
void LCD8_str(char str[]){
    for(int i=0;str[i]!='\0';i++){
        LCD8_char(str[i]);
    }
}

void LCD8_num(int num){
    char num_str[11];
    sprintf(num_str,"%d",num);
    LCD8_str(num_str);
}
       