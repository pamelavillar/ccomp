#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;

int main(){
    Invoice first_invoice{"88e9a7","Lapiceros",12,3};

    cout<<"INVOICE\n\n";
    cout<<"Producto: "<<first_invoice.getDescription();
    cout<<"\nCantidad: "<<first_invoice.getQuantity();
    cout<<"\nPrecio unitario: S/."<<first_invoice.getPrice();
    cout<<"\n\nTotal a pagar: S/."<<first_invoice.getInvoiceAmount();


    //first_invoice.getInvoiceAmount();


}