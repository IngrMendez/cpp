#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int fila = 5;
    int columna = 5;

    int valoresRandom[fila][columna]=
    {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    int sumarArreglo =0;
    


    srand(time(NULL));
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            valoresRandom[i][j] = rand() % 100+1;
            cout << "[" << valoresRandom[i][j] << "]" << " ";
            sumarArreglo = sumarArreglo + valoresRandom[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "El total  de la suma es: " << sumarArreglo;

    return 0;
}