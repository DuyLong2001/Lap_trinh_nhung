int enA = 9;
int in1 = 8;
int in2 = 7;

int enB = 3;
int in3 = 5;
int in4 = 4;
void setup()
{
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}
void ControlON()
{
  analogWrite(enA,255);
  analogWrite(enB,255);
  
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
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
  
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
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
