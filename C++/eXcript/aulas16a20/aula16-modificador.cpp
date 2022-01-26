#include<iostream>
#include<stdlib.h>



using namespace std;

int main(){
    int a =0;  // 4 bytes de memória
    short int b = 0; //2 bytes
    long int c = 0; // ainda 4 bytes, dependendo do compilador

    int a2 = 0;
    signed int b2 = -10;
    unsigned int c2 = -10; // aqui a variável não receberá 10, mas sim um lixo

    cout << sizeof(a) << " - " << a << endl;
    cout << sizeof(b) << " - " << b << endl;
    cout << sizeof(c) << " - " << c << endl;

    cout << sizeof(a2) << " - " << a2 << endl;
    cout << sizeof(b2) << " - " << b2 << endl;
    cout << sizeof(c2) << " - " << c2 << endl;

    char caractere1 =127;
    char caractere2 = -127;

    system("pause");

    return 0;
}
