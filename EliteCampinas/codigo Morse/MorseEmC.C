#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char alfabeto[37]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
                'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
                'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', ' '};
char morse[37][7]={{ "o- "}, {"-ooo "}, {"-o-o "}, {"-oo "}, {"o "}, {"oo-o "},
                {"--o "}, { "oooo "}, {"oo " }, {"o--- "}, {"-o- "}, {"o-oo "},
                {"-- "}, {"-o "}, {"--- "}, { "o--o "}, {"--o- "}, { "o-o "},
                {"ooo "}, {"- "}, {"oo- "}, {"ooo- "}, {"o-- "}, {"-oo- "},
                {"-o-- "}, {"--oo "}, {"o---- "}, {"--oo- "},{"ooo-- "},
                {"oooo- "}, {"ooooo "}, {"-oooo "}, {"--ooo "}, {"---oo "},
                {"----o "}, {"----- "}, {"     "}};
char nome[1000];
int main(){
    printf("Digite a frase que deseja codificar:\n");
    fgets(nome, 1000, stdin);
    for(int i = 0; nome[i] != 0; i++){
        nome[i] = tolower(nome[i]);
        for(int j = 0; alfabeto[j] != 0; j++){
            if(nome[i] == alfabeto[j]){
                printf("%s", morse[j]);
            }
        }
    }
    return 0;
}
