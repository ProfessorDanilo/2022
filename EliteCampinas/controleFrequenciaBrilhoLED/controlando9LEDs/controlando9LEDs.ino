#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5
#define LED5 6
#define LED6 7
#define LED7 8
#define LED8 9
#define LED9 10
#define analog A0

int espera, espera1, espera2;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  Serial.print("Valor lido na porta: ");
  Serial.println(analogRead(analog));
  espera = map(analogRead(analog), 0, 1023, 0, 80);
  Serial.print("Tempo de espera: ");
  Serial.print(espera);
  Serial.println(" ms");
  Serial.println();
  //Regra para as esperas
  espera1 = espera;
  espera2= -2*espera + 166;
  
  //Controle dos leds
  if (espera < 50) {
    digitalWrite(LED6, LOW);
    digitalWrite(LED1, HIGH);
    delay(espera1);
    digitalWrite(LED7, LOW);
    digitalWrite(LED2, HIGH);
    delay(espera1);
    digitalWrite(LED8, LOW);
    digitalWrite(LED3, HIGH);
    delay(espera1);
    digitalWrite(LED9, LOW);
    digitalWrite(LED4, HIGH);
    delay(espera1);
    digitalWrite(LED1, LOW);
    digitalWrite(LED5, HIGH);
    delay(espera1);
    digitalWrite(LED2, LOW);
    digitalWrite(LED6, HIGH);
    delay(espera1);
    digitalWrite(LED3, LOW);
    digitalWrite(LED7, HIGH);
    delay(espera1);
    digitalWrite(LED4, LOW);
    digitalWrite(LED8, HIGH);
    delay(espera1);
    digitalWrite(LED5, LOW);
    digitalWrite(LED9, HIGH);
    delay(espera1);
  }
  else {
    digitalWrite(LED3, LOW);
    digitalWrite(LED9, HIGH);
    delay(espera2);
    digitalWrite(LED2, LOW);
    digitalWrite(LED8, HIGH);
    delay(espera2);
    digitalWrite(LED1, LOW);
    digitalWrite(LED7, HIGH);
    delay(espera2);
    digitalWrite(LED9, LOW);
    digitalWrite(LED6, HIGH);
    delay(espera2);
    digitalWrite(LED8, LOW);
    digitalWrite(LED5, HIGH);
    delay(espera2);
    digitalWrite(LED7, LOW);
    digitalWrite(LED4, HIGH);
    delay(espera2);
    digitalWrite(LED6, LOW);
    digitalWrite(LED3, HIGH);
    delay(espera2);
    digitalWrite(LED5, LOW);
    digitalWrite(LED2, HIGH);
    delay(espera2);
    digitalWrite(LED4, LOW);
    digitalWrite(LED1, HIGH);
    delay(espera2);
  }
}
