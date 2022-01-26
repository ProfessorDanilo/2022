#include <iostream>
#include <stdlib.h>
#include <iomanip>

//IMPORTANTE: A BIBLIOTECA stcio.h FOI SUBSTITUIDA PELA iostream
//em C     em C++
//stdin     cin
//stdout    cout
//stdlog    clog
//instru��o objeto

//operador de inser��o <<
//operador de extra��o >>



using namespace std;
/*tipos primitivos: s�o seis no total
L�gico bool
Caracter char
Inteiro int
Ponto flutuante float
ponto flutuante double
sem valor void
textos longos wchar_t


Alguns autores n�o consideram os dois �ltimos como TIPOS PRIMITIVOS*/


/* o timpo primitivo
int
pode armazenar n�meros entre -32768 at� 32767*/


/*float armazena 32 bits com at� 6 casas decimais*/

/*double armazena at� 15 casas decimais*/




//monipulador hex usado com cout muda para hexadecimal
//setw precisa de uma biblioteca iomanio

int main(){
    int num1, num2;
    num1 = 10;
    num2 = 20;
    cout << "Ola Mundo!";  //Isto � um coment�rio
    cout << "\n";  //uma maneira de pular linha
    cout << num1+num2 << endl; //outra maneira de pular linha

    int varInt = 100;
    char c='r';
    double pFlutuante=5.99;

    cout << "O valor da variavel varInt e: " << varInt << endl;

    cout << "O valor da variavel c e: " << c << endl;

    cout << "O valor da variavel pFlutuante e: " << pFlutuante << endl;



    cout << "Memoria da variavel varInt e: " << sizeof(varInt)<< " bytes" << endl;

    cout << "Memoria da variavel c e: " << sizeof(c)<< " bytes" << endl;

    cout << "Memoria da variavel pFlutuante e: " << sizeof(pFlutuante)<< " bytes\n" << endl ;



    //exemplo de impress�o de numero hexadecimal
    cout << hex << 1500<< endl;

    //para setar o numero total de caracteres incluindo a informa��o a ser impressa
    //lembre-se de usar a biblioteca iomanip
    cout << setw(1000) << 1500 <<endl;

    cout << 1500 << endl;


    //repare que mudou a configura��o do cout
    cout << dec << 1500 << endl;


    cout << setw(10) << 1;
    cout << setw(10) << 2;
    cout << setw(10) << 3;
    cout << setw(10) << 5;
    cout << setw(10) << 8<<endl;
    cout << setw(10) << 1561;
    cout << setw(10) << 2654;
    cout << setw(10) << 3654;
    cout << setw(10) << 5646;
    cout << setw(10) << 6548<<endl;
    cout << setw(10) << 165465432;
    cout << setw(10) << 223;
    cout << setw(10) << 356;
    cout << setw(10) << 55254;
    cout << setw(10) << 668<<endl;
    system("pause");
    return 0;/* Aqui temos um coment�rio em m�ltiplas linhas
    :) super legal n�... S� n�o podemos esquecer de fechar
    este coment�rio*/
}
