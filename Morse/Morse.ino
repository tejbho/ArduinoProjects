int redLED=13;
int dot=200;
int dash=800;
int longW=2000;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redLED, HIGH);
delay(dot);
digitalWrite(redLED, LOW);
delay(dot);
digitalWrite(redLED, HIGH);
delay(dot);
digitalWrite(redLED, LOW);
delay(dot);
digitalWrite(redLED, HIGH);
delay(dot);
digitalWrite(redLED, LOW);
delay(dot);

digitalWrite(redLED, HIGH);
delay(dash);
digitalWrite(redLED, LOW);
delay(dash);
digitalWrite(redLED, HIGH);
delay(dash);
digitalWrite(redLED, LOW);
delay(dash);
digitalWrite(redLED, HIGH);
delay(dash);
digitalWrite(redLED, LOW);
delay(dash);

digitalWrite(redLED, HIGH);
delay(dot);
digitalWrite(redLED, LOW);
delay(dot);
digitalWrite(redLED, HIGH);
delay(dot);
digitalWrite(redLED, LOW);
delay(dot);
digitalWrite(redLED, HIGH);
delay(dot);
digitalWrite(redLED, LOW);
delay(dot);

delay(longW);
}
