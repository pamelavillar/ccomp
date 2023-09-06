#include <iostream>
using namespace std;

int main(){
    int radio=0;
    int circunferencia=0;
    int diametro=0;
    int area=0;

    cout<<"Ingresa el radio del circulo: ";
    cin>> radio;

    area=radio*3.14159;
    diametro=radio*2;
    circunferencia=3.14159*diametro;

    cout<<"Area: "<<area<<", diametro: "<<diametro<<", circunferencia: "<<circunferencia;

    return 0;

}