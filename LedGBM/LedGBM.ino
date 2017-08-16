const int RED = 9;
const int GREEN = 10;
const int BLUE = 11;



void setup() {
  // put your setup code here, to run once:
pinMode( RED,OUTPUT);
pinMode( GREEN,OUTPUT);
pinMode( BLUE,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

//rojo
digitalWrite(RED,HIGH);
digitalWrite(GREEN,LOW);
digitalWrite(BLUE,LOW);

}
