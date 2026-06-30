#include <iostream>

using namespace std;

// Función que busca un elemento utilizando punteros
int buscarElemento(int *vector, int n, int valor)
{
    for (int i = 0; i < n; i++)
    {
        if (*(vector + i) == valor)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int n, buscar;

    cout << "==============================================" << endl;
    cout << "      BUSCAR UN ELEMENTO CON PUNTEROS" << endl;
    cout << "==============================================" << endl;

    cout << "\nIngrese la cantidad de elementos: ";
    cin >> n;

    int numeros[n];

    cout << "\nIngrese los elementos del arreglo:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Elemento [" << i << "]: ";
        cin >> numeros[i];
    }

    cout << "\nIngrese el numero que desea buscar: ";
    cin >> buscar;

    int posicion = buscarElemento(numeros, n, buscar);

    if (posicion != -1)
    {
        cout << "\nEl numero " << buscar
             << " fue encontrado en la posicion "
             << posicion << "." << endl;
    }
    else
    {
        cout << "\nEl numero no se encuentra en el arreglo." << endl;
    }

    return 0;
}
