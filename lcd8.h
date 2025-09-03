/* 
 * File:   lcd8.h
 * Author: Hab
 *
 * Created on September 3, 2025, 2:00 AM
 */

#ifndef LCD8_H
#define	LCD8_H


#define LCD8_DATA PORTA

#define LCD8_RS_PIN PB1
#define LCD8_E_PIN PB2

//001 DL N F xx
#define LCD8_1LINE 0x30 
#define LCD8_2LINE 0x38

//0000 1 D C B 
#define LCD8_DISPLAY_CTRL 0x0F //0000 1 1 1 1  //D:display ON //C:cursor ON //B:cursor blink ON

#define LCD8_CLEAR_DISPLAY 0x01

//0000 01 I/D SH
#define LCD8_ENTRY_MODE 0x06 //0000 01 1 0 //cursor increment //display not shifted

#define LCD8_RETURN_HOME 0x02
void LCD8_init();

void LCD8_cmd(char cmd);
void LCD8_char(char data);
void LCD8_num(int num);
void LCD8_str(char str[]);
//void LCD4_cmdS(char cmd);

void LCD8_enable();

#endif	/* LCD8_H */

