/*7. Sejam três forças aplicadas em um corpo de massa m, em kg, fornecido pelo usuário.
Faça um programa que receba o valor de cada componente de cada uma das forças e,
utilizando a terceira lei de Newton, calcule o vetor aceleração do corpo bem como o
módulo da aceleração do corpo.*/
#include <stdio.h>
#include <math.h>
float forca1[3], forca2[3], forca3[3], massa, aceleracao[3], moduloDaAceleracao;
int main(){
    printf("Digite a massa do corpo: ");
    scanf("%f", &massa);
    for(int i = 0; i < 3; i++){
        printf("Primeiro vetor: ");
        scanf("%f", &forca1[i]);
    }
    for(int i = 0; i < 3; i++){
        printf("Segundo vetor: ");
        scanf("%f", &forca2[i]);
    }
    for(int i = 0; i < 3; i++){
        printf("Terceiro vetor: ");
        scanf("%f", &forca3[i]);
        aceleracao[i] = (forca1[i] + forca2[i] + forca3[i]) / massa;
    }
    printf("A aceleração do corpo será (%f, %f, %f) m/s2.\n", aceleracao[0], aceleracao[1], aceleracao[2] );
    moduloDaAceleracao = sqrt(aceleracao[0]*aceleracao[0] + aceleracao[1]*aceleracao[1] + aceleracao[2]*aceleracao[2]);
    printf("O módulo da aceleração do corpo será: %f m/s2.", moduloDaAceleracao);
    return 0;
}
