/* 
 * File:   lcd4.h
 * Author: Hab
 *
 * Created on August 31, 2025, 8:57 PM
 */

#ifndef LCD4_H
#define	LCD4_H

#define LCD4_DATA_DIR DDRA
#define LCD4_CTRL_DIR DDRB

#define LCD4_DATA PORTA
#define LCD4_CTRL PORTB

#define LCD4_RS_PIN PB1
#define LCD4_E_PIN PB2

//001 DL N F xx
#define LCD4_4BIT_1LINE 0x20  //001 0 0 0 00
#define LCD4_4BIT_2LINE 0x28 //001 0 1 0 00

//0000 1 D C B 
#define LCD4_DISPLAY_CTRL 0x0F //0000 1 1 1 1  //D:display ON //C:cursor ON //B:cursor blink ON

#define LCD4_CLEAR_DISPLAY 0x01

//0000 01 I/D SH
#define LCD4_ENTRY_MODE 0x06 //0000 01 1 0 //cursor increment //display not shifted

#define LCD4_RETURN_HOME 0x02
void LCD4_init();

void LCD4_cmd(char cmd);
void LCD4_char(char data);
void LCD4_num(int num);
void LCD4_str(char str[]);
//void LCD4_cmdS(char cmd);

void LCD4_enable();




#endif	/* LCD4_H */

