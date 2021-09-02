#include <iostream>
using namespace std;
int main() {
    cout<<"Ingrese 5 numeros"<<endl;
    int a,b,c,d,e,max=0,min;
    cout<<"Primer numero"<<endl;
    cin >> a;
    min=a;
    if(a>max){
        max=a;
    }
    cout<<"Segundo numero"<<endl;
    cin >> b;
    if(b>max){
        max=b;
    }
    if(b<min){
        min=b;
    }
    cout<<"Tercer numero"<<endl;
    cin >> c;
    if(c>max){
        max=c;
    }
    if(c<min){
        min=c;
    }
    cout<<"Cuarto numero"<<endl;
    cin >> d;
    if(d>max){
        max=d;
    }
    if(d<min){
        min=d;
    }
    cout<<"Quinto numero"<<endl;
    cin >> e;
    if(e>max){
        max=e;
    }
    if(e<min){
        min=e;
    }

    cout<<"El numero mayor es: "<<max<<endl;
    cout<<"El numero menor es: "<<min<<endl;

    return 0;
}