/*Programa de encendido de leds
Alto con estructuras*/

//Variables
int bot=2;
int led[]={4,5,6,7,8,9,10,11,12,13};
int numLeds=10;
int tiempoRet=400;
int estePin;

void setup(){
  pinMode(bot, INPUT);
  for(estePin=0; estePin<numLeds; estePin++){
    pinMode(led[estePin],OUTPUT);
  }
}

void loop(){
  boolean bot_alto=digitalRead(bot);
  if(bot_alto==HIGH){
    for(estePin=0;estePin<numLeds;estePin++){
      digitalWrite(led[estePin], HIGH);
    }
    delay(tiempoRet);
    for(estePin=0;estePin<numLeds;estePin++){
      digitalWrite(led[estePin], LOW);
    }
    delay(tiempoRet);
  }
}

