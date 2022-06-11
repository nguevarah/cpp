#include <iostream>

using namespace std;

int sumar(int a, int b)
{
    return a + b;
}

int restar(int a, int b)
{
    return a - b;
}

int multiplicar(int a, int b)
{
    return a * b;
}

int dividir(int a, int b)
{
    if (b == 0)
    {
       throw " No se puede dividir entre 0 ";
    }
    
    return a / b;
}

int calculadora (int a, int b, char operador)
{
    switch (operador)
    {
    case '+':
        return sumar(a, b);
        break;
    case '-':
        return restar(a, b);
        break;
    case '*':
        return multiplicar(a, b);
        break;
    case '/':
        return dividir(a, b);
        break;
    
    default:
        break;
    }
    
    throw " El operdor no existe ";
}

int main(int argc, char const *argv[])
{
    system("cls");
    int n1 = 0;
    int n2 = 0;
    int resultado = 0;
    char operador;
    
    cout << " Ingrese n1: ";
    cin >> n1;
    cout << " Ingrese n2: ";
    cin >> n2;
    cout << " Ingrese el operdador ( +, -, *, / ) ";
    cin >> operador;
    
    cout << endl;

    try
    {
        resultado = calculadora(n1, n2, operador);
        cout << " Resultado de "<< n1 << operador << n2 << " es: " << resultado << endl;
    }
    catch(const char* error)
    {
        cout << error;
    }

    return 0;
}
