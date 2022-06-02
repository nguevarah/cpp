#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;

    cout << " Ingrese la nota que obtuvo ";
    cin >> nota;

    if (nota > 100 || nota < 0)
    {
        cout << " Ingrese una nota entre 0 a 100 ";
        return 0;
    }
    
    if (nota >= 96 && nota <=100)
    {
        cout << " Obtuviste una A++ ";
    }

    if (nota >= 91 && nota <=95)
    {
        cout << " Obtuviste una A+ ";
    }

    if (nota >= 86 && nota <=90)
    {
        cout << " Obtuviste una A ";
    }

    if (nota >= 81 && nota <=85)
    {
        cout << " Obtuviste una A- ";
    }

    if (nota >= 76 && nota <=80)
    {
        cout << " Obtuviste una B+ ";
    }

    if (nota >= 71 && nota <=75)
    {
        cout << " Obtuviste una B ";
    }

    if (nota >= 64 && nota <=70)
    {
        cout << " Obtuviste una B- ";
    }

    if (nota >= 61 && nota <=65)
    {
        cout << " Obtuviste una C+ ";
    }

    if (nota >= 50 && nota <=60)
    {
        cout << " Obtuviste una C ";
    }

    if (nota < 50)
    {
        cout << " Obtuviste una F ";
    }
    
    return 0;
}