#include <iostream>
using namespace std;//27
int main() {
  char car;
  cout << "Ingresa un caracter: "; cin>>car;
  cout << static_cast<int>(car); //print 'A'
  return 0;
}