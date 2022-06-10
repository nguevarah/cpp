#include <iostream>

using namespace std;

int sumar(){
    return 5 + 7;
}

string nombreCompleto(){
    // return "Juan Perez"; una forma de hacerlo
    string nombre = "Juan";
    string apellido = "Perez";

    return nombre +" "+ apellido; // otra forma de hacerlo
}

int main(int argc, char const *argv[])
{
    int resultado = sumar();
    string nombreApellido = nombreCompleto();

    cout << " El resultado es: " << resultado;

    cout << endl;

    cout << " El nombre completo es: " << nombreApellido;
    
    return 0;
}
