int bluepin = 3;
int wait = 5000;
void setup() {
  // put your setup code here, to run once:
pinMode(bluepin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(bluepin, 2);
delay(wait);
analogWrite(bluepin, 30);
delay(wait);
analogWrite(bluepin, 255);
delay(wait);
}
