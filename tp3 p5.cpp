#include <iostream>
using namespace std;
int main() {
  int num, count1=0, count2=0;
  int i=1;
  cout<< "ingresa numeros enteros y presiona el numero 0 para parar:"<<endl;
  cin>>num;
  
  while (i<num) {
    count1++;
    if (num%2==0) {
      count2++;
  }
    cin>>num;
  }
  cout<<"numeros pares:"<<count1<<endl;
  cout<<"numeros impares:" <<count1-count2<<endl;
  return 0;
}


