/*As coordenadas de posição de uma partícula (x,y) são (2 m, 3 m) em t= 0; ( 6m ,7 m) e t = 2 s; e (13 m, 14 m) em t = 5 s.
a) Determinar o módulo da velocidade vetorial média no intervalo de tempo t = 0 e t = 2 s
b) Determinar a velocidade média entre t = 0 e t = 5 s..*/
#include <stdio.h>
#include <math.h>
float S1[2], S2[2], DS[2], VM[2] ;
float tempo, modulo_DS, modulo_VM;

int main(){
    printf("Digite o vetor posição inicial.\n");
    printf("Digite a coordenada x: ");
    scanf("%f", &S1[0]);
    printf("Digite a coordenada y: ");
    scanf("%f", &S1[1]);
    printf("O vetor posição inicial é: (%f, %f) m.\n\n", S1[0], S1[1]);

    printf("Digite o vetor posição final\n");
    printf("Digite a coordenada x: ");
    scanf("%f", &S2[0]);
    printf("Digite a coordenada y: ");
    scanf("%f", &S2[1]);
    printf("O vetor posição final é: (%f, %f) m.\n\n", S2[0], S2[1]);

    printf("Digite o tempo para o móvel se deslocar da posição inicial até a final: ");
    scanf("%f", &tempo);

    /*começando os cálculos*/

    /*vetor deslocamento*/
    DS[0] = S2[0] - S1[0];
    DS[1] = S2[1] - S1[1];
    printf("\nO vetor deslocamento é (%f, %f) m.\n", DS[0], DS[1]);

    /*módulo do vetor deslocamento*/
    modulo_DS = sqrt(pow(DS[0],2) + pow(DS[1],2));
    printf("O módulo do vetor deslocamento é %f m.\n", modulo_DS);

    /*velocidade vetorial média*/
    VM[0] = DS[0]/tempo;
    VM[1] = DS[1]/tempo;
    printf("A velocidade vetorial média é (%f, %f) m/s.\n", VM[0], VM[1]);

    /*módulo da velocidade vetorial média*/
    modulo_VM = sqrt(pow(VM[0],2) + pow(VM[1],2));
    printf("O módulo da velocidade vetorial média é %f m/s.\n", modulo_VM);

    return 0;
}
