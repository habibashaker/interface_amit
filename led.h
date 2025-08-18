/* 
 * File:   led.h
 * Author: Hab
 *
 * Created on August 17, 2025, 1:17 PM
 */

#ifndef LED_H
#define	LED_H

#define LED1 3 //PB3
#define LED2 2 //PC2
#define LED3 7 //PC7 
#define LED4 6 //PD6


void init_LEDS();

void led_on(char ledNum);
void led_off(char ledNum);
void led_toggle(char ledNum);


void led_on_all();
void led_off_all();
void led_toggle_all();


/*#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif*/

#endif	/* LED_H */

