#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Ingrese dos numeros"<<endl;
    cout<<"El primero"<<endl;
    cin>>a;
    cout<<"El seguro"<<endl;
    cin>>b;
    if(a%2!=0){
        cout<<a<<endl;
    }
    if(b%2!=0){
        cout<<b<<endl;
    }
    if((a+b)%2!=0){
        cout<<a+b<<endl;
    }
    return 0;
}