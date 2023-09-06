#include <iostream>
using namespace std;

int main(){
    int cm0=0,a0=0,v0=0;
    int cm1=1,a1=0,v1=0;
    int cm2=2,a2=0,v2=0;
    int cm3=3,a3=0,v3=0;
    int cm4=4,a4=0,v4=0;

    a1=6*cm1*cm1;
    a0=6*cm0*cm0;
    a2=6*cm2*cm2;
    a3=6*cm3*cm3;
    a4=6*cm4*cm4;

    v0=cm0*cm0*cm0;
    v1=cm1*cm1*cm1;
    v2=cm2*cm2*cm2;
    v3=cm3*cm3*cm3;
    v4=cm4*cm4*cm4;

    cout<<"Face length\tSurface area\tVolume\n";
    cout<<"of cube (cm)\tof cube (cm^2)\tof cube (cm^3)\n";
    cout<<cm0<<"\t\t"<<a0<<"\t\t"<<v0<<endl;
    cout<<cm1<<"\t\t"<<a1<<"\t\t"<<v1<<endl;
    cout<<cm2<<"\t\t"<<a2<<"\t\t"<<v2<<endl;
    cout<<cm3<<"\t\t"<<a3<<"\t\t"<<v3<<endl;
    cout<<cm4<<"\t\t"<<a4<<"\t\t"<<v4<<endl;
    


}