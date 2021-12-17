/*retorna 1 se c é parte da string s; 0 se não*/
#include <stdio.h>
//não sei como chamar e usar a função abaixo na página 24
int is_in(char *s, char c){
    while(*s)
        if(*s == c) return 1;
        else s++;

    return 0;
}
// o poroblema é o ponteiro. Assunto tratado somente no capítulo 5
