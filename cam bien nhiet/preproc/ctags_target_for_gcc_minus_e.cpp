# 1 "C:\\Users\\ASUS\\Documents\\Arduino\\BT\\TMP36\\TMP36.ino"

void setup() {
  pinMode(A0,0x0);
  pinMode(10,0x1);
  Serial.begin(9600);
}

void loop() {
  int gt = analogRead(A0);
  int nhietdo = map(gt,20,358,-40,125);

  if(nhietdo > 37)
  {
    digitalWrite(10,1);
  }
  else
  {
    digitalWrite(10,0);
  }
}
