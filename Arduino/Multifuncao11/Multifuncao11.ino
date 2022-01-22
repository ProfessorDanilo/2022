/*
*programa para medir o tempo de reação de uma pessoa
 */

#include <TimerOne.h>
#include <Wire.h>
#include <MultiFuncShield.h>

float t1=0, t2=0, i=0, tempoRecord=999.9;

void setup() {
  Timer1.initialize();
  MFS.initialize(&Timer1); // initialize multi-function shield library
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  Serial.begin(9600);
}
void loop() {

  MFS.write("----");
 //programa pra medir tempo de reação
 Serial.print(analogRead(A1));
 Serial.print(analogRead(A2));
 Serial.println(analogRead(A3));
 while(analogRead(A1)>0){ 
  if(!analogRead(A3)){
    MFS.write(tempoRecord); 
  }
  if(!analogRead(A2)){
    break; 
  }
 }
 MFS.write("inic");
 delay(random(1000, 5000));
 digitalWrite(10, LOW); 
 digitalWrite(11, LOW);
 digitalWrite(12, LOW);
 digitalWrite(13, LOW);
 t1=millis();
 while(analogRead(A2)>500){ }
 t2=millis();
 MFS.write(t2-t1);
 if(tempoRecord>t2-t1){
  tempoRecord=(t2-t1);
 }
 digitalWrite(10, HIGH); 
 digitalWrite(11, HIGH);
 digitalWrite(12, HIGH);
 digitalWrite(13, HIGH);
 delay(5000);
}
