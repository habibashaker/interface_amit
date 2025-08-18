#include "DIO.h"
#include <avr/io.h>

//set a specific pin in portA to be out/in

void setPINA_dir(char pinNum, char pinDir) {
    switch (pinDir) {
        case IN:
            DDRA &= ~(1 << pinNum);
            break;
        case OUT:
            DDRA |= (1 << pinNum);
            break;
    }
}

//set whole portA in/out

void setPORTA_dir(char portDir) {
    switch (portDir) {
        case OUT:
            DDRA = 0xFF;
            break;
        case IN:
            DDRA = 0x00;
            break;
    }
}

void setPINA(char pinNum, char state) {
    switch (state) {
        case HIGH:
            PORTA |= (1 << pinNum);
            break;
        case LOW:
            PORTA &= ~(1 << pinNum);
            break;
    }
}

void setPORTA(char state) {
    switch (state) {
        case HIGH:
            PORTA = 0xFF;
            break;
        case LOW:
            PORTA = 0x00;
            break;
    }
}

void togglePINA(char pinNum) {
    PORTA ^= (1 << pinNum);
}

void togglePORTA() {
    PORTA ^= 0xFF;
}

char checkPINA(char pinNum) {
    if (PINA & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}

char checkPORTA() {
    return PINA;
}





//set a specific pin in portB to be out/in

void setPINB_dir(char pinNum, char pinDir) {
    switch (pinDir) {
        case IN:
            DDRB &= ~(1 << pinNum);
            break;
        case OUT:
            DDRB |= (1 << pinNum);
            break;
    }
}

//set whole portA in/out

void setPORTB_dir(char portDir) {
    switch (portDir) {
        case OUT:
            DDRB = 0xFF;
            break;
        case IN:
            DDRB = 0x00;
            break;
    }
}

void setPINB(char pinNum, char state) {
    switch (state) {
        case HIGH:
            PORTB |= (1 << pinNum);
            break;
        case LOW:
            PORTB &= ~(1 << pinNum);
            break;
    }
}

void setPORTB(char state) {
    switch (state) {
        case HIGH:
            PORTB = 0xFF;
            break;
        case LOW:
            PORTB = 0x00;
            break;
    }
}

void togglePINB(char pinNum) {
    PORTB ^= (1 << pinNum);
}

void togglePORTB() {
    PORTB ^= 0xFF;
}

char checkPINB(char pinNum) {
    if (PINB & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}

char checkPORTB() {
    return PINB;
}





//set a specific pin in portA to be out/in

void setPINC_dir(char pinNum, char pinDir) {
    switch (pinDir) {
        case IN:
            DDRC &= ~(1 << pinNum);
            break;
        case OUT:
            DDRC |= (1 << pinNum);
            break;
    }
}

//set whole portA in/out

void setPORTC_dir(char portDir) {
    switch (portDir) {
        case OUT:
            DDRC = 0xFF;
            break;
        case IN:
            DDRC = 0x00;
            break;
    }
}

void setPINC(char pinNum, char state) {
    switch (state) {
        case HIGH:
            PORTC |= (1 << pinNum);
            break;
        case LOW:
            PORTC &= ~(1 << pinNum);
            break;
    }
}

void setPORTC(char state) {
    switch (state) {
        case HIGH:
            PORTC = 0xFF;
            break;
        case LOW:
            PORTC = 0x00;
            break;
    }
}

void togglePINC(char pinNum) {
    PORTC ^= (1 << pinNum);
}

void togglePORTC() {
    PORTC ^= 0xFF;
}

char checkPINC(char pinNum) {
    if (PINC & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}

char checkPORTC() {
    return PINC;
}




//set a specific pin in portA to be out/in

void setPIND_dir(char pinNum, char pinDir) {
    switch (pinDir) {
        case IN:
            DDRD &= ~(1 << pinNum);
            break;
        case OUT:
            DDRD |= (1 << pinNum);
            break;
    }
}

//set whole portA in/out

void setPORTD_dir(char portDir) {
    switch (portDir) {
        case OUT:
            DDRD = 0xFF;
            break;
        case IN:
            DDRD = 0x00;
            break;
    }
}

void setPIND(char pinNum, char state) {
    switch (state) {
        case HIGH:
            PORTD |= (1 << pinNum);
            break;
        case LOW:
            PORTD &= ~(1 << pinNum);
            break;
    }
}

void setPORTD(char state) {
    switch (state) {
        case HIGH:
            PORTD = 0xFF;
            break;
        case LOW:
            PORTD = 0x00;
            break;
    }
}

void togglePIND(char pinNum) {
    PORTD ^= (1 << pinNum);
}

void togglePORTD() {
    PORTD ^= 0xFF;
}

char checkPIND(char pinNum) {
    if (PIND & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}

char checkPORTD() {
    return PIND;
}




