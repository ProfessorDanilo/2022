//portas
int portaDo = A0, portaRe = A1, portaMi = A2,
 portaFa = A3, portaSol = A4,
 portaLa = A5, portaSi = 4;
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
pinMode(portaDo, INPUT);
pinMode(portaRe, INPUT);
pinMode(portaMi, INPUT);
pinMode(portaFa, INPUT);
pinMode(portaSol, INPUT);
pinMode(portaLa, INPUT);
pinMode(portaSi, INPUT);
pinMode(portaPiezo, OUTPUT);
pinMode(LDRdo, INPUT);
Serial.begin(9600);
}
int LDRdo = A0, buzer = 2, ValorADescobrir = 0;
}
void loop() {
Serial.println(analogRead(LDRdo));
if(analogRead(LDRdo) < ValorADescobrir){
 tone(buzer, 440, 200);
}
delay(10);
}

int LDRre = A1, buzer = 2, ValorADescobrir = 0;
pinMode(LDRre, INPUT);
Serial.begin(9600);
}
void loop() {
Serial.println(analogRead(LDRre));
if(analogRead(LDRre) < ValorADescobrir){
 tone(buzer, 440, 200);
}
delay(10);
}

int LDRmi= A2, buzer = 2, ValorADescobrir = 0;
pinMode(LDRmi, INPUT);
Serial.begin(9600);
}
void loop() {
Serial.println(analogRead(LDRmi));
if(analogRead(LDRmi) < ValorADescobrir){
 tone(buzer, 440, 200);
}
delay(10);
}
int LDRfa = A3, buzer = 2, ValorADescobrir = 0;

pinMode(LDRfa, INPUT);
Serial.begin(9600);
}
void loop() {
Serial.println(analogRead(LDRfa));
if(analogRead(LDRfa) < ValorADescobrir){
 tone(buzer, 440, 200);
}
delay(10);
}
int LDRsol = A4, buzer = 2, ValorADescobrir = 0;
pinMode(LDRsol, INPUT);
Serial.begin(9600);
}
void loop() {
Serial.println(analogRead(LDRsol));
if(analogRead(LDRsol) < ValorADescobrir){
 tone(buzer, 440, 200);
}
delay(10);
}
int LDRla = A5, buzer = 2, ValorADescobrir = 0;
pinMode(LDRla, INPUT);
Serial.begin(9600);
}
void loop() {
Serial.println(analogRead(LDRla));
if(analogRead(LDRla) < ValorADescobrir){
 tone(buzer, 440, 200);
}
delay(10);
}
int LDRsi = , buzer = 2, ValorADescobrir = 0;
pinMode(LDRsi, INPUT);
Serial.begin(9600);
}
Serial.println(analogRead(LDRsi));
if(analogRead(LDRsi) < ValorADescobrir){
 tone(buzer, 440, 200);
}
delay(10);
}