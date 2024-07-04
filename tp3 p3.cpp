#include <iostream>
using namespace std;

int main() {
	int num;
    cout<<"DIVIDIR UN NUMERO HASTA ENCONTRAR UN VALOR MENOR QUE 0.01"<<endl;
    cout<<"ingrese un numero:";
    cin>>num;

    while (num >= 0.01) {
        num /= 2;
    }
    cout << "el resultado es: " <<num<< endl;

    return 0;
}
