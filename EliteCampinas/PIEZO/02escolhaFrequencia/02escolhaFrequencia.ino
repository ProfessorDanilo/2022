int frequencia =440, porta = 3;

void setup() {
  pinMode(porta, OUTPUT);
}

void loop() {  
    tone(porta, frequencia);
}
