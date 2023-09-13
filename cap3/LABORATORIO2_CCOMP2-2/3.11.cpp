#include <iostream>
#include <string>
using namespace std;
#include "MotorVehicle.h"

int main(){
    MotorVehicle vehicle1{"Toyota", "Diesel",2010, "negro",2};


    cout<<"Detalles de Motor Vehicle: "<<endl;
    vehicle1.displayCarDetails();

}