byte ledPin[] = {2,3,4,5,6,7,8,9};
int pin2=2;
int pin3=3;
int pin4=4;
int pin5=5;
int pin6=6;
int pin7=7;
int pin8=8;
int pin9=9;
byte pinCount; 

void setup() {
    pinCount = sizeof(ledPin);  //Xem thêm thông tin về hàm sizeof tại http://arduino.vn/reference/sizeof
    for (int i=0;i<pinCount;i++) {
    pinMode(ledPin[i],OUTPUT);  //Các chân LED là OUTPUT
    digitalWrite(ledPin[i],LOW); //Mặc định các đèn LED sẽ tắt
  }

   }



void loop() {
   digitalWrite(pin2,HIGH);
   delay(500);
   digitalWrite(pin3,HIGH);
   delay(500);
   digitalWrite(pin4,HIGH);
   delay(500);
   digitalWrite(pin5,HIGH);
   delay(500);
   digitalWrite(pin6,HIGH);
   delay(500);
   digitalWrite(pin7,HIGH);
   delay(500);
   digitalWrite(pin8,HIGH);
   delay(500);
   digitalWrite(pin9,HIGH);
   delay(500);
   digitalWrite(pin3,LOW);
   digitalWrite(pin5,LOW);
   digitalWrite(pin7,LOW);
   digitalWrite(pin9,LOW);
   delay(500);
   digitalWrite(pin2,HIGH);
   digitalWrite(pin3,HIGH);
   digitalWrite(pin4,HIGH);
   digitalWrite(pin5,HIGH);
   digitalWrite(pin6,HIGH);
   digitalWrite(pin7,HIGH);
   digitalWrite(pin8,HIGH);
   digitalWrite(pin9,HIGH);
   delay(500);
   digitalWrite(pin2,LOW);
   digitalWrite(pin3,LOW);
   digitalWrite(pin4,LOW);
   digitalWrite(pin5,LOW);
   digitalWrite(pin6,LOW);
   digitalWrite(pin7,LOW);
   digitalWrite(pin8,LOW);
   digitalWrite(pin9,LOW);
   delay(500);
   digitalWrite(pin2,HIGH);
   digitalWrite(pin3,HIGH);
   digitalWrite(pin4,HIGH);
   digitalWrite(pin5,HIGH);
   digitalWrite(pin6,HIGH);
   digitalWrite(pin7,HIGH);
   digitalWrite(pin8,HIGH);
   digitalWrite(pin9,HIGH);
   delay(500);
   digitalWrite(pin2,LOW);
   digitalWrite(pin3,LOW);
   digitalWrite(pin4,LOW);
   digitalWrite(pin5,LOW);
   digitalWrite(pin6,LOW);
   digitalWrite(pin7,LOW);
   digitalWrite(pin8,LOW);
   digitalWrite(pin9,LOW);
   delay(500);
   digitalWrite(pin2,HIGH);
   digitalWrite(pin3,HIGH);
   digitalWrite(pin4,HIGH);
   digitalWrite(pin5,HIGH);
   digitalWrite(pin6,HIGH);
   digitalWrite(pin7,HIGH);
   digitalWrite(pin8,HIGH);
   digitalWrite(pin9,HIGH);
   delay(500);
   digitalWrite(pin2,LOW);
   digitalWrite(pin3,LOW);
   digitalWrite(pin4,LOW);
   digitalWrite(pin5,LOW);
   digitalWrite(pin6,LOW);
   digitalWrite(pin7,LOW);
   digitalWrite(pin8,LOW);
   digitalWrite(pin9,LOW);
   delay(500);
}
