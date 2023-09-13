#include <iostream>
#include <string>
using namespace std;

class MotorVehicle{
    public:
        MotorVehicle(string amake,string afuelType,int ayear,string acolor, int aengine):make{amake},fuelType{afuelType},yearOfManufacture{ayear},color{acolor},engineCapacity{aengine}{

        }

        void setMake(string amake){
            make=amake;
        }
        string getMake()const{
            return make;
        }

        void setfueltype(string afueltype){
            fuelType=afueltype;
        }
        string getfueltype()const{
            return fuelType;
        }

        void setyear(int ayear){
            yearOfManufacture=ayear;
        }
        int getyear()const{
            return yearOfManufacture;
        }

        void setcolor(string acolor){
            color=acolor;
        }
        string getcolor()const{
            return color;
        }
        
        void setengine(int aengine){
            engineCapacity=aengine;
        }
        int getengine()const{
            return engineCapacity;
        }

        void displayCarDetails(){
            cout<<"make: "<<getMake()<<endl;
            cout<<"fuel type: "<<getfueltype()<<endl; 
            cout<<"year of manufacture: "<<getyear()<<endl; 
            cout<<"color: "<<getcolor()<<endl; 
            cout<<"engine capacity: "<<getengine()<<endl; 
        }

    private:
        string make;
        string fuelType;
        int yearOfManufacture{0};
        string color;
        int engineCapacity{0};
};