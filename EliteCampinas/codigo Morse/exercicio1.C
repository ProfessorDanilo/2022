/*1. Crie um programa que calcule a média entre dois
números informados previamente no código do programa
e exiba na tela usando o printf().*/
#include <stdio.h>
float num1 = 7, num2 = 2;
float media;

int main(){
    media = (num1 + num2) / 2;
    printf("A media entre os números %f e %f é: %f.", num1, num2, media);
    return 0;
}
