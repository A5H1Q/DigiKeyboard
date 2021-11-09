#include "DigiKeyboard.h"

void setup() {
    pinMode(1,OUTPUT);
}
void loop(){
    digitalWrite(1,LOW);
    DigiKeyboard.sendKeyStroke(0);
    // Begin Code
    
    
    
    // End
    for(;;){
        digitalWrite(1,HIGH);
        delay(100);
        digitalWrite(1,LOW);
        delay(100);
    }
}
/* For Testing:



*/

// Creator:
// Aravind Swami
// name-is-cipher <Github>
