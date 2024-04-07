#include <Servo.h>
Servo myServo;
int Xpin=A0;
int Ypin=A1;
int Spin=2;
int redPin=3;
int servoPin=6;
int buzzPin=7;
int Xval;
int Yval;
int Sval;
int angle;
int dt=200;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(Xpin,INPUT);
pinMode(Ypin,INPUT);
pinMode(Spin,INPUT);

pinMode(redPin,OUTPUT);
pinMode(servoPin,OUTPUT);
pinMode(buzzPin,OUTPUT);

myServo.attach(servoPin);

digitalWrite(Spin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
Xval=analogRead(Xpin);
Yval=analogRead(Ypin);
angle=(180./1023.)*Yval;
Sval=digitalRead(Spin);

analogWrite(redPin, Xval);
myServo.write(angle);

if (Sval==0) {
  digitalWrite(buzzPin, HIGH);
}
else {
  digitalWrite(buzzPin, LOW);
}

delay(dt);
Serial.print("X value = ");
Serial.print(Xval);
Serial.print(" Y Value = ");
Serial.print(Yval);
Serial.print(" Switch State is ");
Serial.println(Sval);
}
