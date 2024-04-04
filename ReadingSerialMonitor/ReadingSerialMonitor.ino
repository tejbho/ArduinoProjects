int numBlinks;
String msg="Enter number of blinks: ";
int j;
int bt=500;
int redPin = 7;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0) {}
numBlinks=Serial.parseInt();
for (j=1; j<=numBlinks; j++) {
  digitalWrite(redPin,HIGH);
  delay(bt);
  digitalWrite(redPin,LOW);
  delay(bt);
}
}
