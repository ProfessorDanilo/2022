void setup(){
  pinMode(8, OUTPUT);
}

void loop(){
  for(float i=41; i<=60;i++){
    tone(8,110*(1+i/12), 10); // play tone 57 (A4 = 440 Hz)
    delay(5);
  }
  for(float i=61; i>=40;i--){
    tone(8,110*(1+i/12), 10); // play tone 57 (A4 = 440 Hz)
    delay(5);
  }
}
