#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 2;
    int b = 10;

    // primero pregunta y despues ejecuta
    while(a > b){
        cout << " (while) a > b " << endl;
        break;
    }

    // primero ejecuta y despues pregunta
    do{
        cout << " (do while) a > b " << endl;
        break;
    }while(a > b);

    return 0;
}
