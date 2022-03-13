void setup(){
  Serial.begin(9600);
}

void loop(){  
  float x = 0;
  float y = 0;
  x = analogRead(A0);
  y = map(x,0,1023,0,500);
  y = y / 100;
  Serial.print("O valor de x é: ");
  Serial.println(x);
  Serial.print("O valor de y é: ");
  Serial.println(y);
  Serial.println("");
  
  delay(500);
}
