/*ligue o negativo do capacitor no resistor e no GND
   o outro lado do resistor liga no outro polo do capacitor e liga na porta A0
      |-CAPACITOR-|
   GND             --A0
      |_RESISTOR__|
*/
#include <math.h>
float t0, tf, t, Vc, E, R = 5000000.0, C;

void setup() {
  // apenas para acompanhar no serial monitor
  Serial.begin(9600);  
}

void loop() {
  // carregando o capacitor por 5 segundos
  do{
    pinMode(A0, OUTPUT);
    digitalWrite(A0, HIGH);
    delay(5000);
    E = analogRead(A0) * 5000.0 / 1023.0;
    Serial.print("A tensão de carga neste momento é: ");
    Serial.print(E);
    Serial.println(" mV");   
    pinMode(A0, INPUT); 
  }while(analogRead(A0) < 870);
  delay(10);
  digitalWrite(A0, LOW);
  

  //medindo o tempo de descarga
  t0 = micros();
  do{
    Vc = analogRead(A0) * 5000.0 / 1023.0;
    Serial.print("A tensão de descarga neste momento é, em mV: ");
    Serial.println(Vc);
  }while (analogRead(A0) > 100) ;
  tf = micros();

  // calculando a capacitância
  t = (tf - t0);
  // C = t / (R * log((E - Vc) / E));
  C = t / (R * log(E / (E - Vc)));
  Serial.print("O tempo em segundos é: ");
  Serial.println(t);
  Serial.print("O valor da capacitância do capacitor é: ");
  Serial.print(C);
  Serial.println(" microfaradays");
  delay(1000);
}
