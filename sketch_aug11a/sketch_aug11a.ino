const int lightPin=13
unsigned int data;
 
void setup() {
  // put your setup code here, to run once:

Serial.beging(9600)
pinMode(lightPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

while (Serial.avaliable() >0) 
}
  data = Serial.read();
  if (data== 'Y') digitalWrite(lightPin,HIGH);
   if (data== 'N') digitalWrite(lightPin,LOW);
