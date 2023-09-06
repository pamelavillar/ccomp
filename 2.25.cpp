#include <iostream>
using namespace std;

int main(){
    int n1=0;
    int n2=0;
    int n3=0;

    cout<<"Ingresa 3 numeros porfis: ";
    cin>>n1;
    cin>>n2;
    cin>>n3;

    if (n3 % n1==0)
        cout<<n1<<" is a factor of"<<n3<<endl;
    else
        cout<<n1<<" is not a factor of"<<n3<<endl;

    if (n3 % n2==0)
        cout<<n2<<" is a factor of"<<n3<<endl;
    else
        cout<<n2<<"is not a factor of"<<n3<<endl;

}