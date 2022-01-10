/* usando saida digital sem usar a biblioteca da shield*/
#include <TimerOne.h>                                   // Biblioteca TimerOne
#include <Wire.h>                                       // Biblioteca Wire
#include <MultiFuncShield.h>                            // Biblioteca Multifunction shield

void setup()
{
  pinMode(12, OUTPUT);
}
void loop() {
  digitalWrite(12, HIGH); // sets the digital pin 12 on
  delay(1000);            // waits for a second
  digitalWrite(12, LOW);  // sets the digital pin 12 off
  delay(1000);            // waits for a second
}
/*FUNCIONOU*/
