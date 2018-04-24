int sensorPin = A0;
int BuzPin = 7;
int value = 0;
void setup() {
Serial.begin(9600);
pinMode(BuzPin,OUTPUT);
}
void loop() {  
value = analogRead (sensorPin);
Serial.println (value, DEC);
if(value>200)
{
	digitalWrite(BuzPin,HIGH);
  delay(1000);
  digitalWrite(BuzPin,LOW);
}
delay (50);
}
