/* programa simples para "brincar"
 */
#include <TimerOne.h>
#include <Wire.h>
#include <MultiFuncShield.h>


void setup() {
 Timer1.initialize();
 MFS.initialize(&Timer1); // initialize multi-function shield library

}
void loop() {
 //programa simples para exibir como letreiro
 
 MFS.write("   u"); 
 delay(100);
 MFS.write("  ud"); 
 delay(100);
 MFS.write(" ude"); 
 delay(100);
 MFS.write("udel"); 
 delay(100);
 MFS.write("deli"); 
 delay(100);
 MFS.write("elis"); 
 delay(100);
 MFS.write("lis "); 
 delay(100);
 MFS.write("is  "); 
 delay(100);
 MFS.write("s   "); 
 delay(100);
 MFS.write("    "); 
 delay(100);
 MFS.write("   n"); 
 delay(100);
 MFS.write("  na"); 
 delay(100);
 MFS.write(" nat"); 
 delay(100);
 MFS.write("nati"); 
 delay(100);
 MFS.write("atil"); 
 delay(100);
 MFS.write("tila"); 
 delay(100);
 MFS.write("ila "); 
 delay(100);
  MFS.write("la  "); 
 delay(100);
 MFS.write("a   "); 
 delay(100);
 MFS.write("    "); 
 delay(100);
 MFS.write("   d"); 
 delay(100);
 MFS.write("  de"); 
 delay(100);
  MFS.write(" de "); 
 delay(100);
 MFS.write("de  "); 
 delay(100);
 MFS.write("e   "); 
 delay(100);
 MFS.write("    "); 
 delay(100);
 MFS.write("   f"); 
 delay(100);
 MFS.write("  fa"); 
 delay(100);
  MFS.write(" far"); 
 delay(100);
  MFS.write("fari"); 
 delay(100);
 MFS.write("aria"); 
 delay(100);
  MFS.write("ria "); 
 delay(100);
  MFS.write("ia  "); 
 delay(100);
  MFS.write("a   "); 
 delay(100);
  MFS.write("    "); 
 delay(100);
}
