// Conecte o LED rgb no gnd e nas portas digitais 3, 5, 6 
void setup(){
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop(){  
  analogWrite(3, 50);
  analogWrite(5, 50);
  analogWrite(6, 50);
}
