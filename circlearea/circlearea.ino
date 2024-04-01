float pi = 3.14;
float r = 2;
float area;
int wait=750;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
area = pi * r * r;
Serial.print("A circle with radius ");
Serial.print(r);
Serial.print(" has an area of ");
Serial.println(area);
delay(wait);
r +=1;
}
