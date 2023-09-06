#include <iostream>
using namespace std;

int main(){
    int n=0;
    int d1=0;
    int d2=0;
    int d3=0;
    int d4=0;

    cout<<"Introduce un numero de 4 digitos: ";
    cin>>n;

    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;
    n=n/10;

    cout<<d4<<"  "<<d3<<"  "<<d2<<"  "<<d1<<endl;

}   