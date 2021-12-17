/*temos que declarar a variável sempre no início do programa ou em um bloco de código separado por {}. Dependendo do compilador, declarar uma variável no meio do programa pode gerra um erro e nao compilar*/
#include <stdio.h>
int main(){
    int i;
    i=10;
    int j;/*em alguns compiladores isso poderia ter gerado um erro, mas no codeblock executou sem problemas*/
    j=20;

    {
        /*criando um bloco de código dentro do programa*/
        int k = 30;
    }
    printf("deu certo");
}
/*funcionou perfeitamente*/
