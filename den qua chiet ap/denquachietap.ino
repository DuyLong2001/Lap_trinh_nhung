int x = 0;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(9, INPUT);
}

void loop()
{
  x = analogRead(A0);
  int brightness = map(x ,0,1023,0,255);
  analogWrite(9,brightness);
}
