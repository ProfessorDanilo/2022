/*temos que declarar a vari�vel sempre no in�cio do programa ou em um bloco de c�digo separado por {}. Dependendo do compilador, declarar uma vari�vel no meio do programa pode gerra um erro e nao compilar*/
#include <stdio.h>
int main(){
    int i;
    i=10;
    int j;/*em alguns compiladores isso poderia ter gerado um erro, mas no codeblock executou sem problemas*/
    j=20;

    {
        /*criando um bloco de c�digo dentro do programa*/
        int k = 30;
    }
    printf("deu certo");
}
/*funcionou perfeitamente*/
