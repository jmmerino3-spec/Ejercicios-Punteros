#include <iostream>

using namespace std;

int main()
{
    int filas, columnas;

    cout << "========================================================" << endl;
    cout << "     SUMA DE CADA FILA DE UNA MATRIZ CON PUNTEROS" << endl;
    cout << "========================================================" << endl;

    cout << "\nIngrese el numero de filas: ";
    cin >> filas;

    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    // Reserva de memoria dinámica
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

    cout << "\nMatriz ingresada:\n\n";

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << *(*(matriz + i) + j) << "\t";
        }
        cout << endl;
    }

    cout << "\nSuma de cada fila:\n";

    for (int i = 0; i < filas; i++)
    {
        int suma = 0;

        for (int j = 0; j < columnas; j++)
        {
            suma += *(*(matriz + i) + j);
        }

        cout << "Fila " << i + 1 << ": " << suma << endl;
    }

    // Liberar memoria
    for (int i = 0; i < filas; i++)
    {
        delete[] matriz[i];
    }

    delete[] matriz;

    return 0;
}
