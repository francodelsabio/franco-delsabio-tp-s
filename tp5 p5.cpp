#include <iostream>
using namespace std;
int main () {
    int opcion=0;
    bool salir=false;
    int volver;
    float saldo=0;
    float deposito=0;
    float retiro;
    while (true) {
    	cout<<"   ***************************************************************"<<endl;
    	cout<<     "   *"<<" Hola! Bienvenido a su cajero automatico, elija una opcion."<<"  *"<<endl;
    	cout<<"   ***************************************************************"<<endl;
    	cout<<" "<<endl;
    	cout<<"opcion 1 Consultar saldo"<<endl;
    	cout<<"opcion 2 Depositar dinero"<<endl;
    	cout<<"opcion 3 Retirar dinero"<<endl;
    	cout<<"opcion 4 Salir"<<endl;
    	cin>>opcion;
    switch (opcion) {
    case 1:
    	cout<<"opcion 1 seleccionada"<<endl;
    	cout<<"su saldo es de: "<<saldo<<endl;
    	cout<<" "<<endl;
    	break;
    case 2:
    	cout<<"opcion 2 seleccionada"<<endl;
    	cout<<"Ingrese la cantidad de dinero que quiere depositar: ";
    	cin>>deposito;
    	cout<<"se han depositado: "<<deposito<<endl;
    	cout<<" "<<endl;
    	saldo=saldo+deposito;
    	break;
    case 3:
    	cout<<"opcion 3 seleccionada"<<endl;
    	cout<<"Ingrese la cantidad de dinero que quiere retirar:"<<endl;
    	cin>>retiro;
    	cout<<"se han retirado: "<<retiro<<endl;
    	cout<<" "<<endl;
    	saldo=saldo-retiro;
    	 break;
    case 4:  
        cout<<"      ********************************"<<endl;
        cout<<"      *  "<<"nos vemos!,Vuelva pronto"<<"  *"<<endl;
        cout<<"      ********************************"<<endl;
    	cin>>salir;
    }
}
return 0;
}
