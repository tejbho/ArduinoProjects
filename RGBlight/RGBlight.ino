int redPin=3;
int greenPin=6;
int bluePin=11;
String myColor;
String msg="What color do you want?";
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
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}

if (myColor=="green") {
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW);
}

if (myColor=="blue") {
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH);
}

if (myColor=="off") {
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}

if (myColor=="white") {
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,HIGH);
}

if (myColor=="yellow") {
  digitalWrite(redPin,HIGH);
  analogWrite(greenPin,100);
  digitalWrite(bluePin,LOW);
}

if (myColor=="purple") {
  analogWrite(redPin,100);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH);
}

if (myColor=="cyan") {
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,HIGH);
}

if (myColor=="orange") {
  digitalWrite(redPin,HIGH);
  analogWrite(greenPin,60);
  digitalWrite(bluePin,LOW);
}

if (myColor=="turquoise") {
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  analogWrite(bluePin,40);
}

if (myColor=="lime") {
  analogWrite(redPin,200);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW);
}

if (myColor=="pink") {
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  analogWrite(bluePin,50);
}
}
