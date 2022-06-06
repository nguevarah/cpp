#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
/*
    int a = 50;
    int b = 10;
    long contador = 1;

    while (a > b)
    {
        if (contador > 100){
            break; 
        }
        cout << " Contador: " << contador << endl;
        contador = contador + 1;
    }
*/

/*
   char opcion = 'n';
   while (opcion != 's')
   {
       while (opcion != 's')
       {
           cout << " Desea salir?";
           cin >> opcion;     
       }    
   }
*/

    //Partes del for
    // int = 0          desde
    // i < 10           hasta
    // i++              incremento

/*
  for (int i = 1; i <= 10; i++)
  {
      cout << i << endl;
  }

    cout << endl;

  for (int i = 10; i > 0; i--)
  {
      cout << i << endl;
  }
*/

/*
for (int i = 0; i <= 10; i++)
  {
      for (int j = 0; j < 10; j++)
      {  
        cout << "i:" << i <<"           " << "j:" << j << endl;
      }
  }
*/

int desde = 0;
int hasta = 0;
int incremento = 0;

cout << " Ingrese el valor desde ";
cin >> desde;
cout << " Ingrese el valor hasta";
cin >> hasta;
cout << " Ingrese el valor de incremento";
cin >> incremento;

cout << endl;
for (int i = desde; i < hasta;i += incremento)
{
    cout << i << endl;
}

    return 0;
}
