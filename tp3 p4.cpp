#include <iostream>
using namespace std;
int main () {
	int num;
	int count;
	count=0;
	num=11;
	
	cout<<"hacer una serie de 25 numeros"<<endl;
	cout<<"la serie es esta:"<<endl;
	
	 while (count < 25) {
        cout<<num<<endl;
        num += 11;
        count++;
    }
}
