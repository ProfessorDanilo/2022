/*3) Agora, faça aparecer na tela o simbolo de cada letra, número e espaço em código Morse. Use as declarações abaixo para te ajudar:*/
#include <stdio.h>
char alfabeto[37]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', ' '};

char morse[37][7]={{ "o- "}, {"-ooo "}, {"-o-o "}, {"-oo "}, {"o "}, {"oo-o "}, {"--o "}, { "oooo "}, {"oo " }, {"o--- "}, {"-o- "}, {"o-oo "}, {"-- "}, {"-o "}, {"--- "}, { "o--o "}, {"--o- "}, { "o-o "}, {"ooo "}, {"- "}, {"oo- "}, {"ooo- "}, {"o-- "}, {"-oo- "}, {"-o-- "}, {"--oo "}, {"o---- "}, {"--oo- "},{"ooo-- "}, {"oooo- "}, {"ooooo "}, {"-oooo "}, {"--ooo "}, {"---oo "}, {"----o "}, {"----- "}, {" "}};

int main(){
    for(int linha = 0; alfabeto[linha] != 0; linha++){
        printf("%c: ", alfabeto[linha]);
        for(int coluna = 0; morse[linha][coluna] != 0; coluna++){
            printf("%c", morse[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}
