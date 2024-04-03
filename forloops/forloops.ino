int yellowPin=11;
int redPin=10;
int yellowTime=500;
int redTime=500;
int yellowBlink=3;
int redBlink=5;
int j;

void setup() {
  // put your setup code here, to run once:
pinMode(yellowPin, OUTPUT);
pinMode(redPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  for(j=1; j<=yellowBlink; j+=1) {
digitalWrite(yellowPin, HIGH);
delay(yellowTime);
digitalWrite(yellowPin, LOW);
delay(yellowTime);
  }

  for(j=1; j<=redBlink; j+=1) {
digitalWrite(redPin, HIGH);
delay(redTime);
digitalWrite(redPin, LOW);
delay(redTime);
  }
}
