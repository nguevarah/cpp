#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // datos de entrada
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento = 0;
    double calculoDescuento = 0;
    double calculoImpuesto = 0;

    cout << endl;
    cout << " Ingrese el subtotal de la factura ";
    cin >> subtotal;

    cout << endl;
    cout << " Ingrese el descuento (0, 10, 15, 20) ";
    cin >> descuento;
    
    // Proceso
    calculoDescuento = (subtotal * descuento) / 100;
    calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
    total = subtotal - calculoDescuento + calculoImpuesto;

    //Salida
    cout << endl;
    cout << " El total a pagar es: " << total;

    return 0;
}