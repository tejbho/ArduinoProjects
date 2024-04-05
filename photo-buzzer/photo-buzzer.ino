int lightPin=A0;
int buzzPin=7;
int lightVal;
int delayT;

void setup() {
  // put your setup code here, to run once:
pinMode(A0, INPUT);
pinMode(buzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal=analogRead(lightPin);
delayT=(9./500.)*lightVal-(9.*200./500.)+1.;
digitalWrite(buzzPin, HIGH);
delay(delayT);
digitalWrite(buzzPin, LOW);
delay(delayT);
}
