#include <iostream>

using namespace std;

string nombrecompleto(string nombre, string apellido)
{
    return nombre +" "+ apellido;
}

int main(int argc, char const *argv[])
{
    string pNombre = "";
    string pApellido = "";
     
    cout << " Ingrese su primer nombre ";
    cin >> pNombre;
    cout << " Ingrese su primer apellido ";
    cin >> pApellido;

    cout << endl;

    cout << " Nombre completo: " << nombrecompleto(pNombre, pApellido);

    return 0;
}
