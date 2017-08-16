void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);//declaramos el pin 
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(13, HIGH); //enciende el led
delay(1000);//espera

digitalWrite(13, LOW); // Apaga el led
delay(1000);//espera
}
