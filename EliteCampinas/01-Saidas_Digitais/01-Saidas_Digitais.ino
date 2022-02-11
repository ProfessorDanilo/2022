/* Este é o primeiro programa feito no Arduino na disciplina de ciências.
 * Professor: Danilo Lima
 * Código no GitHub: 
 * https://github.com/ProfessorDanilo/2022/blob/main/EliteCampinas/01-Saidas_Digitais/01-Saidas_Digitais.ino
 * 
 * Circuito no Thinkercad:
 * https://www.tinkercad.com/embed/9ie8tQgsveu
 * 
 * website em 2022: fisica.professordanilo.com/lab.html
 * ou fisica.professordanilo.com e clique em Laboratório
 * Aula 4
 * anos posteriores consulte "páginas antigas" no site acima
 * 
 * Este material é de uso livre
 * Escola: Elite Col - Campinas - SP
 * Versão 1.0
*/


/*note que o que estiver entre a barra de divisão e o asterisco é apenas comentário
 * portanto o computador ignora isso quando vai gerar o arquivo (compilar) para enviar
 * ao Arduino.
 * Este primeiro programa será desenvolvido pelo professor e enviado ao Arduino. 
 * O objetivo desta aula é apresentar o que é saída digital, PWM e as portas de alimentação
 * de 5 V, 3,3V, VIN e GND.
 * Vamos utilizar um LED da cor que o grupo escolher e um resistor de 10 000 ohm ou outro mais 
 * apropriado para o LED com a cor correspondente.
 */

// Aqui é outro tipo de comentário 

// Vamos sempre começar um programa com as configurações que é feita dentor do 
// void setup() {}
// O conteúdo sempre deve estar entre os colchetes {}

void setup(){
  // vamos configurar quais portas do Arduino fornecem energia para o LED
  // Ecolhi como saída a porta 2 que ficará enviando um sinal ligando e desligando o LED a cada segundo
  pinMode(2, OUTPUT);
  // A porta 13 será acionada somente quando entrar com 5V na porta 12
  pinMode(13,OUTPUT);
  pinMode(12, INPUT_PULLUP);
  // Todas as portas PWM irão variar a saída do mínimo ao máximo e vice-versa a cada segundo
  // Estas saídas correspondem às portas 3, 5, 6, 9, 10 e 11. Estas não precisam ser configuradas
  // bem como as portas analógicas não precisam ser declaradas.
}

// O Arduino fica repetindo o conteúdo dentro do void loop() {} um número indefinido de vezes
void loop(){
  // ligando o LED na porta 2 por 1 segundo
  digitalWrite(2, HIGH);
  // para que o Arduino espere sem fazer absolutamente nada usamos uma função chamada delay()
  // e inserimos dentro do parêntesis o valor que queremos que o Arduino fique inativo. Este 
  // tempo é medido em milisegundos (um milésimo de segundo), portanto devemos escrever:
  // delay(1000);
  // para desligar o LED
  // digitalWrite(2, LOW);
  // esperamos mais um segundo
  /* Então você deve estar se perguntando porque deixei estas funções dentro de um comentário.
   * O motivo é simples: farei isso porque ainda há outras rotinas que o Arduíno irá realizar e
   * que levará certo tempo. Por isso, não usaremos a função delay
   */
  // Usaremos uma condição para saber se a entrada 12 está conectada com 5 V
  if(digitalRead(12)==HIGH){
    digitalWrite(13, HIGH);
    }
    else{
      digitalWrite(13, LOW);
    }
  // por fim, vamos fazer as saídas PWM variarem de 0 à 255 em 1 segundo
  for(int i = 0; i<=255; i++){
      analogWrite(3,i);
      analogWrite(5,i);
      analogWrite(6,i);
      analogWrite(9,i);
      analogWrite(10,i);
      analogWrite(11,i);
      // vamos esperar 3 milisegundos para cada valor de i, assim teremos que 
      // enquanto i varia de 0 até 255 terá passado 256 * 3 = 768 milisegundos
      // que corresponde a quase um segundo (0,768 segundo).
      delay(3);
  }
  // vamos deixar o LED com brilho máximo por 232 milisegundo para que assim temos 
  // um total de 1000 milisegundos (1 segundo).
  delay(232);
  // agora faremos o mesmo para que o LED se apague em 0,768 segundo e fique assim
  // por mais 232 milisegundo.
  // ANTES DISSO, NÃO SE ESQUEÇA DE APAGAR O LED LIGADO NA PORTA 2
  digitalWrite(2, LOW);
  for(int i = 0; i <=255; i++){
    analogWrite(3,255-i);
    analogWrite(5,255-i);
    analogWrite(6,255-i);
    analogWrite(9,255-i);
    analogWrite(10,255-i);
    analogWrite(11,255-i);
    delay(3);
  }
  delay(232);
}
