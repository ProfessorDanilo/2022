/*3. Faça um programa que receba a massa de uma substância em grama,
o calor específico em cal/(g °C), o calor em calorias recebido e
retorne a variação de temperatura em °C. Assuma que não haja mudança
de estado físico.
Teste com m = 200 g, c = 0,75 cal/(g °C) e Q = 375 cal. Sua resposta deve ser 2,5°C.
*/
#include <stdio.h>
float Q, m, c, DT;
int main(){
    printf("Digite o valor da massa em gramas: ");
    scanf("%f", &m);
    printf("Digite o calor específico em cal/(g °C): ");
    scanf("%f", &c);
    printf("Digite o calor recebido pela substância em calorias: ");
    scanf("%f", &Q);
    DT = Q / (m * c);
    printf("A variação de temperatura foi de: %f", DT);
    return 0;
}
