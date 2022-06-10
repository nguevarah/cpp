#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << i << "  ";
    }

    cout << endl;
    cout << endl;

    for (int i = 9; i >= 0; i--)
    {
        cout << i << "  ";
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < 1000000; i++)
    {
        cout << i << "  ";
        if (i == 115) // al encontar el 115 se sale
        {
            break;
        }  
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        if (i == 5 || i == 7) // al encontar puede continuar
        {
            continue;  // se salta numeros
        }  
        cout << i << "  ";
    }
    
    return 0;
}
