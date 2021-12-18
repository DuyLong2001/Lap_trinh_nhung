#include <Arduino.h>
#line 1 "C:\\Users\\ASUS\\Documents\\Arduino\\1Motor\\1Motor.ino"
#line 1 "C:\\Users\\ASUS\\Documents\\Arduino\\1Motor\\1Motor.ino"
void setup();
#line 6 "C:\\Users\\ASUS\\Documents\\Arduino\\1Motor\\1Motor.ino"
void loop();
#line 1 "C:\\Users\\ASUS\\Documents\\Arduino\\1Motor\\1Motor.ino"
void setup() {
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  delay(1000);
   digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  delay(1000);
}

