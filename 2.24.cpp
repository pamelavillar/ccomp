#include <iostream>
using namespace std;

int main(){
    int num1=0;
    int num2=0;

    cout<<"Ingrese dos numeros please: ";
    cin>>num1;
    cin>>num2;


    if (num1 % 2 != 0)
        cout<<num1<<" es impar"<<endl;
    else
        cout<<num1<<" es par"<<endl;
    
    if (num2 % 2 != 0)
        cout<<num2<<" es impar"<<endl;
    else
        cout<<num2<<" es par"<<endl;
    
    if ((num1+num2) % 2 != 0)
        cout<<"La suma es impar"<<endl;
    else
        cout<<"La suma es par"<<endl;

}