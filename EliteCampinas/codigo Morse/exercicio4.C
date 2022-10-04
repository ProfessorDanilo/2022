/*4. Considere agora que você irá fazer vários testes para determinar a
potência P de fornos de micro-ondas. O teste consiste em colocar uma
quantidade m de certa substância, medida em grama, com calor específico
c conhecido, medido em cal/(g °C) dentro do forno e medir a variação de
temperatura DT e o tempo para que isso ocorra.*/
#include <stdio.h>
float potencia, massa, calorEspecifico, variacaoTemperatura, tempo;
int main(){
    printf("Os valores a seguir estão em calorias, segundo, graus célsius e gramas.\n");
    printf("Digite a massa da substância: ");
    scanf("%f", &massa);
    printf("Digite o calor específico da substância: ");
    scanf("%f", &calorEspecifico);
    printf("Digite a variação de temperatura: ");
    scanf("%f", &variacaoTemperatura);
    printf("Digite o tempo: ");
    scanf("%f", &tempo);
    potencia = massa * calorEspecifico * variacaoTemperatura / tempo;
    printf("A potencia do micro-ondas é de %f calorias por segundo.", potencia);
    return 0;
}

