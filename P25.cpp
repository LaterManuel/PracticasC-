#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Ingrese 3 numeros"<<endl;
    cout<<"Primero"<<endl;
    cin>>a;
    cout<<"Segundo"<<endl;
    cin>>b;
    cout<<"Tercero"<<endl;
    cin>>c;
    bool d=false;
    bool e=false;
    if(c%a==0){
        d=true;
    }
    if(c%b==0){
        e=true;
    }
    if(d&&e){
        cout<<"Los dos primeros son factores del tercero"<<endl;
    }

    return 0;
}