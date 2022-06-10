#include <iostream>

using namespace std;

int sumar(int a, int b){
    return a + b;
}

int restar(int a, int b){
    return a - b;
}

int main(int argc, char const *argv[])
{
    system("cls");

    int n1 = 0;
    int n2 = 0;

    cout << " Ingrese el valor de n1: ";
    cin >> n1;
    cout << " Ingrese el valor de n2: ";
    cin >> n2;

    cout << endl;

    cout << "La suma es: " << sumar(n1, n2);
    cout << endl;
    cout << "La resta es: " << restar(n1, n2);
    cout << endl;
    
    return 0;
}
