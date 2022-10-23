/*2) Crie uma matriz que apresenta todo o alfabeto e, utilizando o looping for,
exibe na tela todo o alfabeto. Para isso, temos que salvar o alfabeto em uma
"matriz" de caracteres e isso é feito com chaves { } e aspas simples ' ' como
se segue:
char alfabeto[37]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}*/
#include <stdio.h>

char alfabeto[37]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main(){
    for(int i = 0; alfabeto[i] != 0; i++){
        printf("%c\n", alfabeto[i]);
    }

    return 0;
}
