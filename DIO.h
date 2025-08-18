/* 
 * File:   DIO.h
 * Author: Hab
 *
 * Created on August 16, 2025, 4:45 AM
 */

#ifndef DIO_H
#define	DIO_H

#define IN 0
#define OUT 1

#define HIGH 1
#define LOW 0

void setPINA_dir(char pinNum, char pinDir);
void setPORTA_dir(char portDir);
void setPINA(char pinNum,char state);
void setPORTA(char state);
void togglePINA(char pinNum);
void togglePORTA();
char checkPINA(char pinNum);
char checkPORTA();

void setPINB_dir(char pinNum, char pinDir);
void setPORTB_dir(char portDir);
void setPINB(char pinNum,char state);
void setPORTB(char state);
void togglePINB(char pinNum);
void togglePORTB();
char checkPINB(char pinNum);
char checkPORTB();

void setPINC_dir(char pinNum, char pinDir);
void setPORTC_dir(char portDir);
void setPINC(char pinNum,char state);
void setPORTC(char state);
void togglePINC(char pinNum);
void togglePORTC();
char checkPINC(char pinNum);
char checkPORTC();

void setPIND_dir(char pinNum, char pinDir);
void setPORTAD_dir(char portDir);
void setPIND(char pinNum,char state);
void setPORTD(char state);
void togglePIND(char pinNum);
void togglePORTD();
char checkPIND(char pinNum);
char checkPORTD();


/*#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif*/

#endif	/* DIO_H */

