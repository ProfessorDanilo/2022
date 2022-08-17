int LDR = A0;
int vermelho = 2, verde = 3;

void setup() {
  Serial.begin(9600);
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {
  Serial.println(analogRead(LDR));
  delay(500);
  if(analogRead(LDR) > 878){
    digitalWrite(vermelho, HIGH);
    digitalWrite(verde, LOW);
  }
  else{
    digitalWrite(vermelho, LOW);
    digitalWrite(verde, HIGH);
  }  
}
