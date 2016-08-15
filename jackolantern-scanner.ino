void setup(){
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop(){
//big pause on pin 12
  digitalWrite(9,HIGH);
  delay(200);
  digitalWrite(9,LOW);
  delay(25);
  digitalWrite(8,HIGH);
  delay(100);
  digitalWrite(8,LOW);
 delay(25);
  digitalWrite(7,HIGH);
  delay(100);
  digitalWrite(7,LOW);
 delay(25);
  digitalWrite(6,HIGH);
  delay(100);
  digitalWrite(6,LOW);
 delay(25);
// big pause on pin 8
  digitalWrite(5, HIGH);
  delay(200);
  digitalWrite(5, LOW);
 delay(25);
//new lines to make the light move
//in the opposite direction
  digitalWrite(6,HIGH);
  delay(100);
  digitalWrite(6,LOW);
 delay(25);
  digitalWrite(7,HIGH);
  delay(100);
  digitalWrite(7,LOW);
 delay(25);
  digitalWrite(8,HIGH);
  delay(100);
  digitalWrite(8,LOW);
 delay(25);

}
