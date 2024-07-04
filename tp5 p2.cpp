#include <iostream>
using namespace std;
int main () {
	int A=1;
	int f=1;

	cout<<"ingrese el tamaño del triangulo: ";
	cin>>A;
	for (int j=3;j<=A;j++) {
		for (int i=2;i<=f;i++){
	cout<<"*";
	}
	cout<<" "<<endl;
	f++;
 }

}
