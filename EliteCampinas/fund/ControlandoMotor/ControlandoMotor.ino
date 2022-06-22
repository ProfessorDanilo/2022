#include <Brasilino.h>
inteiro pino_ENA = 3; //controla a velocidade
inteiro pino_IN1 = 4; //ligar o motor
inteiro pino_IN2 = 5; //ligar o motor

funcao configurar() {
  iniciarSerial();
  saida(pino_IN1);
  saida(pino_IN2);
}

funcao repetir() {
  inteiro i = 0;
  ligar(pino_IN1);
  desligar(pino_IN2);
  escreverAnalogico(pino_ENA, 255);
  escreverSerialn("frente");
  esperar(1);
  desligar(pino_IN1);
  ligar(pino_IN2);
  escreverSerialn("trás");
  esperar(1);
  ligar(pino_IN1);
  ligar(pino_IN2);
  escreverSerialn("travada");
  esperar(3);
  desligar(pino_IN1);
  desligar(pino_IN2);
  escreverSerialn("livre");
  esperar(1);
}
