/*retorna 1 se c � parte da string s; 0 se n�o*/
#include <stdio.h>
//n�o sei como chamar e usar a fun��o abaixo na p�gina 24
int is_in(char *s, char c){
    while(*s)
        if(*s == c) return 1;
        else s++;

    return 0;
}
// o poroblema � o ponteiro. Assunto tratado somente no cap�tulo 5
