float seno, anguloRadiano;
int anguloGrau, frequencia, porta = 3;


void setup() {
  pinMode(porta, OUTPUT);
}

void loop() {
  for(anguloGrau = 0; anguloGrau < 360 ; anguloGrau++){
    anguloRadiano = anguloGrau*3.14/180;
    seno = sin(anguloRadiano);
    frequencia = 2000+int(seno*1000);
    tone(porta, frequencia);
    delay(2);
  }

}
