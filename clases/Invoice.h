#include <string>
#include <iostream>

using namespace std;

class Invoice{
    public:
        Invoice(string anumber, string adescription, int aquantity, int aprice):number{anumber},description{adescription},quantity{aquantity},price{aprice},vat{0.2},discount{0}{
            
        }

        void setNumber(string anumber){
            number=anumber;
        }
        string getNumber()const{
            return number;
        }

        void setDescription(string adescription){
            description=adescription;
        }
        string getDescription()const{
            return description;
        }

        void setQuantity(int aquantity){
            
            if (aquantity>0){
                quantity=aquantity;
            }
            
        }
        int getQuantity()const{
            return quantity;
        }

        void setPrice(int aprice){
            if (aprice>0){
                price=aprice;
            }        
        }
        int getPrice()const{
            return price;
        }

        void setVat(double vt){
            if (vt>0){
                vat=vt;
            }   
            
        }
        double getVat()const{
            return vat;
        }

        void setDiscount(double dis){
            if (dis>0){
                discount=dis;
            }   
        }
        double getDiscount()const{
            return discount;
        }


    private:
        string number;
        string description;
        int quantity;
        int price;
        double vat;
        double discount;





}