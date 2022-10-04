/*5. Faça um programa que receba 5 números e guarde em um vetor.
Os dados devem ser do tipo float.*/
#include <stdio.h>
float vetor[5];
int main(){
    for(int i = 0; i < 5; i = i + 1){
        printf("Digite um número: ");
        scanf("%f", &vetor[i]);
    }
    for(int i = 0; i < 5; i = i + 1){
        printf("%f\n", vetor[i]);
    }
    return 0;
}
