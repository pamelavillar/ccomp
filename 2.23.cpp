#include <iostream>
using namespace std;

int main(){
    int n1=0;
    int n2=0;
    int n3=0;
    int n4=0;
    int n5=0;
    int mayor=0;
    
    cout<<"Ingresa 5 numeros porfis: ";
    cin>>n1;
    cin>>n2;
    cin>>n3;
    cin>>n4;
    cin>>n5;
    if (n1>n2)
        mayor=n1;
    else
        mayor=n2;
    if (n3>mayor)
        mayor=n3;
    if (n4>mayor)
        mayor=n4;
    if (n5>mayor)
        mayor=n5;

    int menor=n1;
    if (n2<menor)
        menor=n2;
    if (n3<menor)
        menor=n3;
    if (n4<menor)
        menor=n4;
    if (n5<menor)
        menor=n5;

    cout<<"El numero mayor es: "<<mayor<<",el numero menor es: "<<menor<<endl;
}