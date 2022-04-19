int redPin = 3, greenPin = 5, bluePin = 6;

void setup() {
  //portas analógicas não precisam ser configuradas
}

void loop() {
  Vermelho();
  delay(1000);
  Verde();
  delay(1000);
  Azul();
  delay(1000);
  Ciano();
  delay(1000);
  Magenta();
  delay(1000);
  Amarelo();
  delay(1000);
  Branco();
  delay(1000);
}

void Vermelho(){  
  analogWrite(redPin, 10);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
}
void Verde(){  
  analogWrite(redPin, 0);
  analogWrite(greenPin, 10);
  analogWrite(bluePin, 0);
}
void Azul(){  
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 10);
}
void Ciano(){  
  analogWrite(redPin, 0);
  analogWrite(greenPin, 10);
  analogWrite(bluePin, 10);
}
void Magenta(){  
  analogWrite(redPin, 10);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 10);
}
void Amarelo(){  
  analogWrite(redPin, 10);
  analogWrite(greenPin, 10);
  analogWrite(bluePin, 0);
}
void Branco(){  
  analogWrite(redPin, 10);
  analogWrite(greenPin, 10);
  analogWrite(bluePin, 10);
}
