int buzzPin=8;
int potPin=A0;
int potVal;
float toneVal;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {
potVal=analogRead(potPin);
Serial.println(potVal);
toneVal=(9940./1023.)*potVal+60;
digitalWrite(buzzPin, HIGH);
delayMicroseconds(toneVal);
digitalWrite(buzzPin,LOW);
delayMicroseconds(toneVal);
}
