#include <iostream>
using namespace std;

int main() {
    int km_dia, costo_galon, km_litro, estacionamiento, peaje, calculo_gasolina;
    int costo_total;

    cout << "Ingrese los kilómetros que conduce al día: ";
    cin >> km_dia;
    cout << "Ingrese el costo por litro de gasolina: ";
    cin >> costo_galon;
    cout << "Ingrese el promedio de kilómetros por litro: ";
    cin >> km_litro;
    cout << "Ingrese las cuotas de estacionamiento por día: ";
    cin >> estacionamiento;
    cout << "Ingrese el peaje por día: ";
    cin >> peaje;

    calculo_gasolina = costo_galon*(km_dia / km_litro);
    costo_total = calculo_gasolina + estacionamiento + peaje;

    cout << "El costo por día de conducir al trabajo es de S/."<< costo_total << endl;

    return 0;
}
