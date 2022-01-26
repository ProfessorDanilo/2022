#include <stdlib.h>
#include<iostream>

using namespace std;

int main(){
    cout << "Informe um numero: " << endl;

    int num1 = 0;

    cin >> num1;

    cout << "Informe outro numero: " << endl;

    int num2=0;

    cin >> num2;

    int soma = 0;

    soma = num1 + num2;

    cout << "A soma dos numeros e: "<< soma << endl;

    system("pause");

    return 0;

}
