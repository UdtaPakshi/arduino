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

String inpStr;
long inpInt;
String c;

Keypad pad = Keypad(makeKeymap(keys_used), rowPins, colPins, 4, 3);


void setup(){
  Serial.begin(9600);
  inpStr.reserve(10);
}

void loop(){
  char key = pad.getKey();

  if(key){
    Serial.println(key);

    if (key>= '0' && key<='9'){
      inpStr += key;
    } else if (key == '#'){
      if (inpStr.length() > 0){
        inpStr = inpStr.toInt();
        inpStr = "";
      }
     }
    else if (key == "*"){
      inpStr = "";
    }
  }
}