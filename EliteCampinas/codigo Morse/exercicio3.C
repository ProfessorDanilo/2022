/*3. Fa�a um programa que receba a massa de uma subst�ncia em grama,
o calor espec�fico em cal/(g �C), o calor em calorias recebido e
retorne a varia��o de temperatura em �C. Assuma que n�o haja mudan�a
de estado f�sico.
Teste com m = 200 g, c = 0,75 cal/(g �C) e Q = 375 cal. Sua resposta deve ser 2,5�C.
*/
#include <stdio.h>
float Q, m, c, DT;
int main(){
    printf("Digite o valor da massa em gramas: ");
    scanf("%f", &m);
    printf("Digite o calor espec�fico em cal/(g �C): ");
    scanf("%f", &c);
    printf("Digite o calor recebido pela subst�ncia em calorias: ");
    scanf("%f", &Q);
    DT = Q / (m * c);
    printf("A varia��o de temperatura foi de: %f", DT);
    return 0;
}
