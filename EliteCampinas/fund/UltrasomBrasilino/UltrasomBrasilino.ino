#include <Brasilino.h>
  /*programa para medir a velocidade do ultrassom
   */  
//Definindo as variáveis
inteiro trig = 2; //disparador
inteiro eco = 3; //mede o tempo de retorno do ultrassom
longo tempo_ida_e_volta = 0; //para guardar o tempo do eco
inteiro espera = 1; //tempo entre duas medidas seguidas

funcao configurar(){
  saida(trig);
  entrada(eco);
  iniciarSerial();
  desligar(trig);
  esperar(2);  
  escreverSerialn("Iniciando medidas do ultrassom");
}

funcao repetir(){
  ligar(trig);//liga o disparador
  delayMicroseconds(10);//espera 10 microsegundos
  desligar(trig);

  /*a função abaixo mede o tempo que o pino
   * eco fica ligado (HIGH)
   */
  tempo_ida_e_volta = pulseIn(eco, HIGH);

  //exibindo o resultado no monitor serial
  escreverSerialn("O tempo de medida do eco é ");
  escreverSerialn(tempo_ida_e_volta);
  escreverSerialn(" microsegundos.")
  esperar(espera);
}
