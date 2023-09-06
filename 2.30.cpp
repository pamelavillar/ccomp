#include <iostream>
using namespace std;

int main(){
    int peso=0,altura=0,BMI=0;
        
    cout<<"Introduce tu peso: ";
    cin>>peso;
    cout<<"Introduce tu altura: ";
    cin>>altura;

    BMI=peso/(altura*altura);

    cout<<"Your body mass index is: "<<BMI<<endl;
    cout<<"BMI VALUES\n";
    cout<<"Underweight:\tless than 18.5 "<<endl;
    cout<<"Normal:\tbetween 18.5 and 24.9"<<endl;
    cout<<"Overweight:\tbetween 25 and 29 "<<endl;
    cout<<"Obese:\t30 or greater "<<endl;
    


}