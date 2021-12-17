#include <stdio.h>
/*gerando matriz 10 por 10*/
void main(void){
    int i[10][10];
    for(int j =0; j<10; j++){
        for(int k=0; k<10; k++){
            i[j][k]=(j+1)*(k+1);//cada elemento da matriz é dado pelo produto entre coluna e linha
        }
    }

    for(int j =0; j<10; j++){
        for(int k=0; k<10; k++){
            printf("%d\t", i[j][k]);//imprime cada linha
        }
        printf("\n");//pula uma linha para imprimir na linha seguinte
    }
}
