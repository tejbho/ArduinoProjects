int redPin=12;
int greenPin=7;
int bluePin=2;
String myColor;
String msg="What color LED? ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0) {}
myColor=Serial.readString();

if (myColor=="red") {
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}

if (myColor=="green") {
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW);
}

if (myColor=="blue") {
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH);
}
}
