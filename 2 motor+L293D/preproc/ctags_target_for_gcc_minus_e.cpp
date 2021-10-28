# 1 "C:\\Users\\ASUS\\Documents\\Arduino\\BT\\2 DC-motor\\2motor\\2motor.ino"
int enA = 9;
int in1 = 8;
int in2 = 7;

int enB = 3;
int in3 = 5;
int in4 = 4;
void setup()
{
  pinMode(enA, 0x1);
  pinMode(in1, 0x1);
  pinMode(in2, 0x1);

  pinMode(enB, 0x1);
  pinMode(in3, 0x1);
  pinMode(in4, 0x1);
}
void ControlON()
{
  analogWrite(enA,255);
  analogWrite(enB,255);

  digitalWrite(in1,0x1);
  digitalWrite(in2,0x0);
  digitalWrite(in3,0x1);
  digitalWrite(in4,0x0);
}
void Speedup()
{
  for(int i=0;i<256;i++)
  {
    analogWrite(enA, i);
    analogWrite(enB, i);
    delay(20);
  }
}
void Speeddown()
{
  for(int i=255;i>=0;--i)
  {
    analogWrite(enA, i);
    analogWrite(enB, i);
    delay(20);
  }
}
void ControlOFF()
{
  analogWrite(enA,255);
  analogWrite(enB,255);

  digitalWrite(in1,0x0);
  digitalWrite(in2,0x0);
  digitalWrite(in3,0x0);
  digitalWrite(in4,0x0);
}
void loop()
{
  ControlON();
  delay(1000);
  Speedup();
  Speeddown();
  ControlOFF();
  delay(1000);
}
