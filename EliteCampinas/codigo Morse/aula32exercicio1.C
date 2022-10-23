/*1) Faça um programa que recebe seis números, como explicado acima,
e exiba na tela uma espécie de tabela, apresentando a nota dos alunos
como na tabela acima. Lógico que a formatação aqui não será nossa
prioridade, portanto não se preocupe com a beleza do que for apresentado.*/
#include <stdio.h>
float matriz[2][3];
int main() {
    scanf("%f", &matriz[0][0]);
    scanf("%f", &matriz[0][1]);
    scanf("%f", &matriz[0][2]);
    scanf("%f", &matriz[1][0]);
    scanf("%f", &matriz[1][1]);
    scanf("%f", &matriz[1][2]);
    printf("A tabela que devemos apresentar é:\n \t \t \t NOTA P1\t NOTA P2\t NOTA P3\n Aluno 1\t %f\t %f\t %f\n Aluno 2\t %f\t %f\t %f\n", matriz[0][0], matriz[0][1], matriz[0][2], matriz[1][0], matriz[1][1], matriz[1][2]);
    return 0;
}
