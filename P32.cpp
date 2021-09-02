#include <iostream>
using namespace std;
// Problema 2.32
int main(){
  int edad;
  int hrm;
  cout<<"Inserte la edad de la persona"<<endl;
  cin>> edad;
  hrm=220-edad;
  cout<<"El maximo de latidos de la edad de "<<edad<<" es "<<hrm;
  return 0;
}