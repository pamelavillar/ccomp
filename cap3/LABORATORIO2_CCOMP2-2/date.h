#include <iostream>
#include <string>
using namespace std;

class Date{
    public:
    Date(int aday, int amonth, int ayear): month{amonth},day{aday},year{ayear}{
        
        if (amonth>=1 && amonth<=12){
            month = amonth;
        }
            
        else{
            month = 1;
        }
            
    }

    void setMonth(int amonth){
        month=amonth;
    }
    int getMonth()const{
        return month;
    }

    void setDay(int aday){
        day=aday;
    }
    int getDay()const{
        return day;
    }

    void setYear(int ayear){
        year=ayear;
    }
    int getYear()const{
        return year;
    }

    void displayDate(){
        cout<<getDay()<<"/"<<getMonth()<<"/"<<getYear()<<endl;
    }

    private:
        int month{0};
        int day{0};
        int year{0};
};