#include <iostream>
#include<stdio.h>


using namespace std;

int main(){
    int vidas;
    char letras;
    double decimal;
    float decimalMaisPrecisa;
    bool vivo = true;
    string nome = "Danilo";

    cout << vivo << "\n" << nome;

    cout << "\n" << "Digite um float: ";
    cin >> decimalMaisPrecisa;
    cin >> decimal;

    cout << "\n" << "O valor double e: " << decimal;
    cout << "\n" << "O valor float e: " << decimalMaisPrecisa;
    return 0;
}
