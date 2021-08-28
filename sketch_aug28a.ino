const int ledPin=12;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);

}

void loop() {
int delayPeriod=100;
digitalWrite(ledPin,HIGH);
delay(delayPeriod);
digitalWrite(ledPin,LOW);
delay(delayPeriod);

}
