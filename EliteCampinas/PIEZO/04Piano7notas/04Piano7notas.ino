/*
  7 pushbutton
  1 piezo passivo
  usaremos o input pull up
  note que a variável Do tem que ser maiúscula
  pois existe uma palavra reservada do (faça)
*/
//portas
int portaDo = 2, portaRe = 3, portaMi = 4,
    portaFa = 5, portaSol = 6,
    portaLa = 7, portaSi = 8;

//notas (frequências)
int notaDo = 264,notaRe = 297, notaMi = 330,
    notaFa = 352, notaSol = 396,
    notaLa = 440, notaSi = 495;

//piezo
int portaPiezo = 9;


//duração da nota
int duracao = 200;

void setup()
{
  pinMode(portaDo, INPUT_PULLUP);
  pinMode(portaRe, INPUT_PULLUP);
  pinMode(portaMi, INPUT_PULLUP);
  pinMode(portaFa, INPUT_PULLUP);
  pinMode(portaSol, INPUT_PULLUP);
  pinMode(portaLa, INPUT_PULLUP);
  pinMode(portaSi, INPUT_PULLUP);
  pinMode(portaPiezo, OUTPUT);
}


void loop()
{
  // detecta botão pressionado e chama
  // a função correspondente
  if (digitalRead(portaDo) == LOW) {
    tone(portaPiezo, notaDo, duracao);
  }
  
  if (digitalRead(portaRe) == LOW) {
    tone(portaPiezo, notaRe, duracao);
  }
  
  if (digitalRead(portaMi) == LOW) {
    tone(portaPiezo, notaMi, duracao);
  }
  
  if (digitalRead(portaFa) == LOW) {
    tone(portaPiezo, notaFa, duracao);
  }
  
  if (digitalRead(portaSol) == LOW) {
    tone(portaPiezo, notaSol, duracao);
  }
  
  if (digitalRead(portaLa) == LOW) {
    tone(portaPiezo, notaLa, duracao);
  }
  
  if (digitalRead(portaSi) == LOW) {
    tone(portaPiezo, notaSi, duracao);
  }
  
  delay(10); // Delay a little bit to improve simulation performance
}
