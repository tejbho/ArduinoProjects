int myVoltPin=A2;
int readVal;
float V2;
int delayT=250;
int redPin=9;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(myVoltPin, INPUT);
pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(myVoltPin);
V2=(5./1023.)*readVal;
Serial.println(V2);
if (V2>2 && V2<3) {
  digitalWrite(redPin,HIGH);
}
if (V2<2 || V2>3) {
  digitalWrite(redPin,LOW);
}
delay(delayT);
}