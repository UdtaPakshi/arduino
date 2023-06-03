#define r1 1
#define y1 2
#define g1 3

#define r2 11
#define y2 12
#define g2 13
int time;

void setup() {
  
  Serial.begin(9600);
  pinMode(r1,OUTPUT);
  pinMode(y1,OUTPUT);
  pinMode(g1,OUTPUT);

  pinMode(r2,OUTPUT);
  pinMode(y2,OUTPUT);
  pinMode(g2,OUTPUT);

}

void loop() {
  
  digitalWrite(r1, HIGH);
  digitalWrite(g2, HIGH);
  digitalWrite(y1, LOW);
  digitalWrite(y2, LOW);
  delay(time);

  digitalWrite(y1, HIGH);
  digitalWrite(y2, HIGH);
  digitalWrite(r1, LOW);
  digitalWrite(g2, LOW);
  delay(time);
 
  digitalWrite(r2, HIGH);
  digitalWrite(g1, HIGH);
  digitalWrite(y1, LOW);
  digitalWrite(y2, LOW);
  delay(time);

  digitalWrite(y1, HIGH);
  digitalWrite(y2, HIGH);
  digitalWrite(r2, LOW);
  digitalWrite(g1, LOW);
  delay(time);


}
