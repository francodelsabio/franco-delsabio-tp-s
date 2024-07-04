#include <iostream>
using namespace std;

int main() {
    float contador = 0;
    float suma = 0;
    float numero;
    float maximo; 
	float minimo;
	
   cout<<"ingresa el numero: "<<contador+ 1<<":";
   
   cin>>numero;
   maximo=numero;
   minimo=numero;
   while (contador < 10) {
   cout << "Ingrese el numero " << contador + 1 << ":";
   cin >> numero;
    suma += numero;
   contador++;
    if (numero<minimo){
	minimo=numero;}
     if (numero>maximo){
	maximo=numero;
	}
}   
    float promedio = suma / 10;
    cout << "El promedio de los numeros ingresados es: " << promedio << endl;
    cout<< "el resultado de la suma es: "<<suma<<endl;
    cout<< "el valor maximo es: "<<maximo<<endl;
    cout<<"el valor minimo es: "<<minimo<<endl;
    return 0;
}
