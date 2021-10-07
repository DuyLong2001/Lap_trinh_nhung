#define led 10
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
