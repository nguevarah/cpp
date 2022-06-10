#include <iostream>

using namespace std;

int sumar (int a, int b){
    return a + b;
}
   

int main(int argc, char const *argv[])
{
    system("cls");

    cout << sumar(5, 7);
    cout << endl;
    cout << sumar(3, 7);
    cout << endl;
    cout << sumar(5, 5);
    cout << endl;

    return 0;
}
