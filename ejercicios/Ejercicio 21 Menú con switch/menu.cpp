#include <iostream>

 using namespace std;

 int main(int argc, char const *argv[])
 {
     int opcion = 0;
    while (true)
    {
        system("cls");
        cout << " **** " << endl;
        cout << " MEMU " << endl;
        cout << " **** " << endl;

        cout << endl;
        cout << "1 - Cafe y Granitas" <<endl;
        cout << "2 - Reposteria" <<endl;
        cout << "0 - Salir" <<endl;

        cout << " Ingrese una opcion del Menu " << endl;
        cin >> opcion;

        if (opcion == 1)
        {
            system("cls");
            cout << "Estas en el Menu de Cafe y Granitas" << endl;
            system ("pause");
        }

        if (opcion == 2)
        {
            system("cls");
            cout << "Estas en el Menu de Reposteria" << endl;
            system ("pause");
        }
           if (opcion == 0)
        {
            break;
        }
    }
    cout << endl;
    cout << "Salistes del sistema";
    
     return 0;
 }
 