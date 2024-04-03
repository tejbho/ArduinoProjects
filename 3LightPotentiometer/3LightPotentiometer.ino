int voltPin=A2;
int readVal;
float v;
int rPin=9;
int yPin=5;
int gPin=2;
int dt = 250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(voltPin, INPUT);
pinMode(rPin, OUTPUT);
pinMode(yPin, OUTPUT);
pinMode(gPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(voltPin);
v=(5./1023.)*readVal;
Serial.println(v);
if (v<3) {
  digitalWrite(gPin, HIGH);
  digitalWrite(yPin, LOW);
  digitalWrite(rPin, LOW);
}
if (v>3 && v<4) {
  digitalWrite(yPin, HIGH);
  digitalWrite(gPin, LOW);
  digitalWrite(rPin, LOW);
}
if (v>4) {
  digitalWrite(rPin, HIGH);
  digitalWrite(yPin, LOW);
  digitalWrite(gPin, LOW);
}
delay(dt);
}
