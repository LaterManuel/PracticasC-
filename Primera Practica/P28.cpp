#include <iostream>
using namespace std;//28
int main() {
  int num;
  cout << "Ingresa un entero: "; 
  cin>>num;
  for(;num>0;num/=10){
    cout << num%10 <<" ";
  }
  return 0;
}