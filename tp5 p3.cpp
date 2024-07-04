#include <iostream>
using namespace std;
int main () {
	int A;
	int resultado;
	
	cout<<"ingrese un numero entero:"<<endl;
	cin>>A;
	
	for (int i=1;i<11;i++){
	for (int j=1;j<11;j++)
	resultado=A*i;
	
	cout<<i<<"X"<<A<<"="<<resultado<<endl;
	}
	return 0;
	
}
	
