
#include "DIO.h"
#include "buttons.h"

void buttons_init(){
    setPINA_dir(button,IN);
}

char isPressed(){
    return checkPINA(button);
}
