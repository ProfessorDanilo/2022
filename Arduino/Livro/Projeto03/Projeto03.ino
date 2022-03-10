/*semáforo*/
int ledDelay = 3000;
int redPin = 10;
int yellowPin = 9;
int greenPin = 8;

void setup(){
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}


void loop(){
  digitalWrite(redPin, HIGH);
  delay(ledDelay);
  digitalWrite(yellowPin,HIGH);
  digitalWrite(redPin,LOW);
  delay(1000);
  digitalWrite(greenPin,HIGH);
  digitalWrite(yellowPin, LOW);
  delay(2*ledDelay);
  digitalWrite(greenPin,LOW);
}
