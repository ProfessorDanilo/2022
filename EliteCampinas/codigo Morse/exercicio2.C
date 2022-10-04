/*2. Crie um programa que calcule
a média entre dois números, informados
pelo usuário, e imprima na tela o resultado.
Além do printf(), você vai utilizar o scanf().*/
#include <stdio.h>
float num1, num2, media;

int main(){
    printf("Digite o valor do primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o valor do segundo numero: ");
    scanf("%f", &num2);
    media = (num1 + num2) / 2;
    printf("A media entre os números %f e %f é: %f.", num1, num2, media);
    return 0;
}
