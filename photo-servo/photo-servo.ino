#include <Servo.h>
int servoPin=9;
int lightPin=A0;
int lightVal;
int servoPos;
Servo myServo;
int dt=250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
pinMode(servoPin, OUTPUT);
pinMode(lightPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal=analogRead(lightPin);
Serial.println(lightVal);
delay(dt);
servoPos=(-16./10.)*lightVal+16.*300./10.;
myServo.write(servoPos);
}
