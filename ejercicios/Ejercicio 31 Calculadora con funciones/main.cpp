#include <iostream>

using namespace std;

int sumar(int a, int b)
{
    return a + b;
}

int calculadora (int a, int b, char operador)
{
    if (operador == '+')
    {
        return sumar(a, b);
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    system("cls");
    int n1 = 0;
    int n2 = 0;
    char operador;

    cout << " Ingrese n1: ";
    cin >> n1;
    cout << " Ingrese n2: ";
    cin >> n2;
    cout << " Ingrese el operdador ( +, -, *, / ) ";
    cin >> operador;
    
    cout << endl;
    cout << " Resultado de "<< n1 << operador << n2 << " es: " << calculadora(n1, n2, operador) << endl;
    

    return 0;
}
