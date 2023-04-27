#include <Key.h>
#include <Keypad.h>

char keys_used[4][3] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

byte rowPins[4] = {6,7,8,9};
byte colPins[3] = {10,11,12};

Keypad pad = Keypad(makeKeymap(keys_used), rowPins, colPins, 4, 3);


void setup(){
  Serial.begin(9600);
}

void loop(){
  char key = pad.getKey();

  if(key){
    Serial.println(key);
  }
}