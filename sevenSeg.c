#include <stdio.h>
#include <stdlib.h>
#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

#include "DIO.h"
#include "sevenSeg.h"

char numbers[] = {
    0x3F, //0
    0x06, //1
    0x5B, //2
    0x4F, //3
    0x66, //4
    0x6D, //5
    0x7D, //6
    0x07, //7
    0x7F, //8
    0x6F //9    
};

void init_7Seg(){
    setPORTA_dir(OUT);
}

void _7seg_write(char num){
    setPORTA(numbers[(int) num]);
}