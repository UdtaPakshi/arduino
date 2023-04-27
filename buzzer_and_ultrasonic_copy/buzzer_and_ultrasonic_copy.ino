int trigPin = 6;

int echoPin = 7;

int buzzer = 9;

int led_out = 10;

void setup() {

  Serial.begin(9600);

  pinMode(buzzer, OUTPUT);

  pinMode(trigPin, OUTPUT);

  pinMode(echoPin, INPUT);

  pinMode(led_out, OUTPUT);

}

 

void loop() {

  long duration, distance;

  digitalWrite(trigPin,HIGH);

  delayMicroseconds(1000);

  digitalWrite(trigPin, LOW);

  duration=pulseIn(echoPin, HIGH);

  distance =(duration/2)/29.1;

  Serial.print(distance);

  Serial.println("CM");

  delay(10);

  

  if((distance<=100)){
    digitalWrite(buzzer,HIGH);
    digitalWrite(led_out, HIGH);
  }

  else if(distance>100){
    digitalWrite(buzzer,LOW);
    digitalWrite(led_out, LOW);
  }


}
