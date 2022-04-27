/*
 * Utilizarei uma fonte 9V 2A para acionar um eletroímã
 * O problema é que ela desarma se ligarmos diretamente.
 * Então, vamos utilizar a saída PWM para controlar o
 * a tensão na base de um trasistor e com isso controlar
 * a corrente que a fonte fornece.
 * Utilizarei um amperímetro para medir a corrente elétrica
 * e verificar o valor da saída PWM.
 * 
 * Circuito: utilizarei a porta 3 do Arduíno conectada na base do transistor
 * Como vou usar um transistor NPN (BD 137), o positivo passará no amperímetro,
 * depois vai para o coletor; o emissor vai para o GND que deve ser ligado tanto 
 * na fonte quanto no Arduino. Uma alternativa é conectar a fonte diretamente no 
 * Arduino e usar o VIN como fonte de corrente, porém por utilizarmos correntes 
 * elevadas, o procedimento poderia queimar o Arduino
 */
/* ATENÇÃO, SE VOCÊ CONSEGUIU ESTE CÓDIGO PROCURANDO NA INTERNET, SAIBA QUE VOCÊ
 * PODE DANIFICAR SEU APARELHO SE NÃO SOUBER O QUE ESTÁ FAZENDO. RECOMENDO QUE
 * FAÇA ISSO SOB SUPERVISÃO, MAS SE DECIDIR USAR, USE POR SUA CONTA E RISTO.
 */

int base = 6;

void setup(){
}

void loop(){
  analogWrite(base,255);
}
