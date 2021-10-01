#include <Arduino.h>
#line 1 "C:\\Users\\ASUS\\Documents\\Arduino\\BT\\TMP36\\TMP36.ino"
#define led 10
#line 2 "C:\\Users\\ASUS\\Documents\\Arduino\\BT\\TMP36\\TMP36.ino"
void setup();
#line 8 "C:\\Users\\ASUS\\Documents\\Arduino\\BT\\TMP36\\TMP36.ino"
void loop();
#line 2 "C:\\Users\\ASUS\\Documents\\Arduino\\BT\\TMP36\\TMP36.ino"
void setup() {
  pinMode(A0,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int gt = analogRead(A0);
  int nhietdo = map(gt,20,358,-40,125);
  
  if(nhietdo > 37)
  {
    digitalWrite(led,1);
  }
  else
  {
    digitalWrite(led,0);
  }
}

