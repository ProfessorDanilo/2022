/*6. Faça um programa que receba 3 números e guarde em um vetor.
Depois receba mais 3 números e guarde em outro. Apresente então
a soma de ambos os vetores, isto é, a soma do primeiro elemento
do primeiro vetor com o primeiro elemento do segundo vetor; a
soma do segundo elemento do primeiro vetor com a soma do segundo
elemento do segundo vetor e assim por diante.*/

#include <stdio.h>
float forca1[3], forca2[3], resultante[3];
int main(){
    for(int i = 0; i < 3; i++){
        printf("Primeiro vetor: ");
        scanf("%f", &forca1[i]);
    }
    for(int i = 0; i < 3; i++){
        printf("Segundo vetor: ");
        scanf("%f", &forca2[i]);
        resultante[i] = forca1[i] + forca2[i];
    }
    printf("O vetor força resultante é: (%f, %f, %f).", resultante[0], resultante[1], resultante[2]);
    return 0;
}
