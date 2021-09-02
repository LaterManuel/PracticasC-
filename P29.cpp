#include <iostream>
#include <string.h>
using namespace std;
// Problema 2.29
int main(){
    int limite;
    int base=0;
    cout<<"Ingrese el valor en cm de longitud"<<endl;
    cin>>limite;
    if (limite<0){
        cout<<"Inserte numeros mayores o iguales a 0";
    } else {
        cout<<"Face length \tSurface area \tVolume"<<endl;
        cout<<"of cube(cm) \tof cube (cm^2) \tof cube(cm^3)"<<endl;
        int p1;
        int p2;
        int p3;
        while (base<=limite){
            p1=base;
            p2=(base*base)*6;
            p3=base*base*base;
            cout<<p1<<"\t\t"<<p2<<"\t\t"<<p3<<endl;
            base++;
        }
    }
  return 0;
}