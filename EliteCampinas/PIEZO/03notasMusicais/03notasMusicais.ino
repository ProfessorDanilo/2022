int porta = 3, espera = 200, esperaPequena=100;

void Do(){
  tone(porta, 262);
  delay(espera);
  noTone(porta);
}

void re(){
  tone(porta, 294);
  delay(espera);
  noTone(porta);
}

void mi(){
  tone(porta, 330);
  delay(espera);
  noTone(porta);
}

void fa(){
  tone(porta, 349);
  delay(espera);
  noTone(porta);
}

void sol(){
  tone(porta, 392);
  delay(espera);
  noTone(porta);
}

void la(){
  tone(porta, 440);
  delay(espera);
  noTone(porta);
}

void si(){
  tone(porta, 494);
  delay(espera);
  noTone(porta);
}

void setup() {
  pinMode(porta, OUTPUT);
}

void loop() {
  Do();
  re();
  mi();
  fa();
  fa();
  fa();
  delay(esperaPequena);
  Do();
  re();
  Do();
  re();
  re();
  re();  
  delay(esperaPequena);
  Do();
  sol();
  fa();
  mi();
  mi();
  mi();
  delay(esperaPequena);
  Do();
  re();
  mi();
  fa();
  fa();
  fa();
  delay(esperaPequena);
  Do();
  re();
  mi();
  fa();
  fa();
  fa();
  /*delay(esperaPequena);
  delay(esperaPequena);
  Do();
  re();
  mi();
  fa();
  delay(esperaPequena);
  re();
  mi();
  fa();
  sol();
  delay(esperaPequena);
  mi();
  fa();
  sol();
  la();
  fa();
  Do();
  delay(esperaPequena);
  Do();
  re();
  mi();
  fa();
  delay(esperaPequena);
  re();
  mi();
  fa();
  sol();
  delay(esperaPequena);
  mi();
  fa();
  sol();
  la();
  fa();
  delay(esperaPequena);
  mi();
  fa();
  sol();
  la();
  fa();
  delay(esperaPequena);
  Do();
  si();
  Do();  */
  delay(3000);    
}
