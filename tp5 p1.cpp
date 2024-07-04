#include <iostream>
using namespace std;
int main () {
	int A;
	int resultado=1;
	int i;
	cout<<"Ingrese un numero:";
	cin>>A;
	if (A<0){
	cout<<"El valor es negativo, no puede realizarse";}
	else {
	for (int i=1;i<=A;i++){
		resultado=resultado*i;
	}
	cout<<"el factorial de "<< A <<" es:"<<resultado<<endl;

}

}
	

