#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

// primera manera de hacerlo

int main(int argc, char const *argv[])
{
    int opcion = 0;

    cout << " ************** " << endl;
    cout << " MENU DE JUEGOS " << endl;
    cout << " ************** " << endl;

    cout << endl;

    cout << " Seleccione un juego " << endl << endl;
    cout << " 1 StarShip " << endl;
    cout << " 2 Snake " << endl << endl;
    cout << " Ingrese un numero del menu para seleccionar un juego: ";
    cin >> opcion;

    system("cls");
    
    // primera forma de hacerlo

    if (opcion == 1)
    {
        starShip();
    }

    if (opcion == 2)
    {
        snake();
    }
    else
        {
            cout << " Error! Recuerda ingresar una de las opciones del menu ";
        }

    // segunda forma de hacerlo
    /*
    switch (opcion)
    {
    case 1:
        starShip();
        break;
    case 2:
        snake();
        break;
    
    default:
        cout << " Error! Recuerda ingresar una de las opciones del menu ";
        break;
    }
   */
    return 0;
}
