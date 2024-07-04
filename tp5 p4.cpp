#include <iostream>
using namespace std;

int main(){
	
	int i;
	int vendedor;
	int total_ventas = 0;
    char nombre[30];
	int ventas;	
	cout<<"Ingrese cantidad de Vendedores: ";
	cin>>vendedor;
	cout<<" "<<endl;
	for(i=0;i<vendedor;i++){
	cout<<"Ingrese nombre del Vendedor: ";
	cin>>nombre;
	cout<<"Ingrese cantidad de Ventas: ";
	cin>>ventas;
	total_ventas
	 = total_ventas + ventas;
	}
	cout<<" "<<endl;
	cout<<"Ventas Totales: "<<total_ventas;
}
