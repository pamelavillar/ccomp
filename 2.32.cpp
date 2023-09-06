#include <iostream>
using namespace std;

int main() {
    int edad, MHR1, MHR2, MHR3, MHR4;


    cout << "Ingrese su edad: ";
    cin >> edad;
    MHR1=220-edad;
    MHR2=208-0.7*edad;
    MHR3=207-0.7*edad;
    MHR4=211-0.64*edad;

    int mayor;
    if (MHR1>MHR2)
        mayor=MHR1;
    else
        mayor=MHR2;
    if (MHR3>mayor)
        mayor=MHR3;
    if (MHR4>mayor)
        mayor=MHR4;
  
    int menor=MHR1;
    if (MHR2<menor)
        menor=MHR2;
    if (MHR3<menor)
        menor=MHR3;
    if (MHR4<menor)
        menor=MHR4;


    cout<<"Common MHR: "<<MHR1<<endl;
    cout<<"Tanaka MHR: "<<MHR2<<endl;
    cout<<"Gellish MHR: "<<MHR3<<endl;
    cout<<"Nes MHR: "<<MHR4<<endl;
    cout<<"Conclusion"<<endl;
    cout<<"The range of values of MHR is " <<menor<<"-"<<mayor<<endl;

    return 0;
}
