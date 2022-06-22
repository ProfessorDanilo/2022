void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT);   
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT);  
}

void loop() {
  Serial.println(analogRead(A0));
  if(analogRead(A0)>=60){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
  }
  else if(analogRead(A0)<60 && analogRead(A0)>=40){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  }
  else if(analogRead(A0)<40 && analogRead(A0)>=20){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  else if(analogRead(A0)<20 && analogRead(A0)>=10){
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  else{
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
}
