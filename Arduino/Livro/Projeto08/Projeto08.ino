/*projeto 8 - RGB
 */
 float RGB1[3], RGB2[3], INC[3];

 int red, green, blue;

 int redPin=11, greenPin=10, bluePin=9;

 void setup(){
  randomSeed(analogRead(0));
/*Descrição
randomSeed() inicializa o gerador de números pseudoaleatórios, fazendo o começar em um ponto arbitrário em sua sequência aleatória. Essa sequência, enquanto muito longa, e aleatória, é sempre a mesma.

Se é importante que uma sequência de valores gerados por random() seja diferente em execuções subsequentes de um sketch, use randomSeed() para inicializar o gerador de números aleatórios com uma entrada significantemente aleatória, como analogRead() em um pino desconectado.

Por outro lado, pode ser ocasionalmente útil usar sequências pseudoaleatórias exatamente repetidas. Isso pode ser conseguido chamando-se randomSeed() com um número fixo, antes de começar a usar a sequência aleatória.
*/

   RGB1[0]=0;
   RGB1[1]=0;
   RGB1[2]=0;

   RGB2[0] = random(256);
   RGB2[1] = random(256);
   RGB2[2] = random(256);
 }

void loop(){
  for(int x=0; x<10; x++){
    arcoIris();
  }
  
  randomSeed(analogRead(0));

  for(int x=0; x<3; x++){
    INC[x] = (RGB1[x] - RGB2[x]) / 256;
  }
  for(int x=0; x<256; x++){
    red = int(RGB1[0]);
    green = int(RGB1[1]);
    blue = int(RGB1[2]);

    analogWrite(redPin, red);
    analogWrite(greenPin, green);
    analogWrite(bluePin, blue);

    RGB1[0]-=INC[0];
    RGB1[1]-=INC[1];
    RGB1[2]-=INC[2];    
  }

  for(int x=0; x<3; x++){
    RGB2[x] = random(556)-300;
    RGB2[x]=constrain(RGB2[x], 0, 255);
    delay(1000);
  }
}


void arcoIris(){
  //vermelho
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
  delay(1000);

  //laranja
  analogWrite(redPin, 255);
  analogWrite(greenPin, 127);
  analogWrite(bluePin, 0);
  delay(1000);

  //amarelo
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 0);
  delay(1000);

  //verde
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 0);
  delay(1000);

  //azul
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);
  delay(1000);

  //anil
  analogWrite(redPin, 75);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 130);
  delay(1000);

  //violeta
  analogWrite(redPin, 143);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);
  delay(1000);
}
