/*testando função*/
#include <stdio.h>
void f(void); //confesso que não entendi o porque desta linha

void main(void){
    int i;

    for(i =0; i < 10; i++) f();
}


void f(void){
    int j=10;

    printf("%d ", j);

    j++;

    //aproveitando para testar um beep
    printf("\a");
}
