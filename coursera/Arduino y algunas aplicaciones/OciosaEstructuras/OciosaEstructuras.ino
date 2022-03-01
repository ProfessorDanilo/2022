/* Programa OciosaEstructuras.ino
 Realiza el encendido de los diez leds de la rutina Ociosa,
 y en cuyo código se incluye el uso de estructuras
 de programación */
// Variables
int led[] = {4,5,6,7,8,9,10,11,12,13};
int numLeds = 10;
int tiempoRetOciosa = 200;
int cuenta_ocio = 0;
int estePin;
// Función setup
void setup ()
{
 for (estePin = 0; estePin < numLeds; estePin++)
 {
 pinMode (led[estePin],OUTPUT);
 }
}
// Función loop
void loop ()
{
 digitalWrite (led[cuenta_ocio],HIGH);
 digitalWrite (led[cuenta_ocio+4],HIGH);
 delay (tiempoRetOciosa);
 digitalWrite (led[cuenta_ocio],LOW);
 digitalWrite (led[cuenta_ocio+4],LOW);
 cuenta_ocio++;
 if (cuenta_ocio > 3)
 {
 cuenta_ocio = 0;
 }
}
