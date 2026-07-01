#include <iostream>

using namespace std;

int main()
{
    int filas, columnas;
    int suma = 0;

    cout << "==================================================" << endl;
    cout << "      SUMA DE UNA MATRIZ CON PUNTEROS" << endl;
    cout << "==================================================" << endl;

    cout << "\nIngrese el numero de filas: ";
    cin >> filas;

    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    // Reserva de memoria dinámica para la matriz
    int **matriz = new int*[filas];

    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new int[columnas];
    }

    cout << "\nIngrese los elementos de la matriz:\n";

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> *(*(matriz + i) + j);
        }
    }

    cout << "\nMatriz ingresada:\n";

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << *(*(matriz + i) + j) << "\t";
            suma += *(*(matriz + i) + j);
        }
        cout << endl;
    }

    cout << "\nLa suma de todos los elementos es: " << suma << endl;

    // Liberar memoria
    for (int i = 0; i < filas; i++)
    {
        delete[] matriz[i];
    }

    delete[] matriz;

    return 0;
}
