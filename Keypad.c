#include "DIO.h"
#include "Keypad.h"

extern char keys[4][3]=
{
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'},
    {'*','0','#'}
};

void keypad_init(){ //4 rows 3 columns  
   
    //set 4 row pins as outputs
    
    setPINA_dir(4,OUT);
    setPINA_dir(5,OUT);
    setPINA_dir(6,OUT);
    setPINA_dir(7,OUT);
    
    //set 3 columns 
    setPINA_dir(1,IN);
    setPINA_dir(2,IN);
    setPINA_dir(3,IN);
    
    //rows high
    setPINA(4,HIGH);
    setPINA(5,HIGH);
    setPINA(6,HIGH);
    setPINA(7,HIGH);
    
    //enable internal pull ups 
    setPINA(1,HIGH);
    setPINA(2,HIGH);
    setPINA(3,HIGH);
}
    

char keypad_read(){
    for(int row = 4;row<=7;row++){
        setPINA(row,LOW);
        for(int col = 1;col<=3;col++){
            if (!(checkPORTA() & (1<<col))){
                setPINA(row,HIGH);
                _delay_ms(50);
                return keys[row-4][col-1];
            }  
        }
        setPINA(row,HIGH);
    }
    return 0; //no key pressed
}