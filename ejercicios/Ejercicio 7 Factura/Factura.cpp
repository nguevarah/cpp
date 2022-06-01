#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // datos de entrada
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;

    cout << endl;
    cout << " Ingrese el subtotal de la factura ";
    cin >> subtotal;

    // Proceso
    total = subtotal + (subtotal * 0.15);

    //Salida
    cout << endl;
    cout << " El total a pagar es: " << total;

    return 0;
}
