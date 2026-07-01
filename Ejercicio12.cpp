#include <iostream>

using namespace std;

// Función para ordenar el arreglo utilizando punteros
void ordenarArreglo(int *vector, int n)
{
    int aux;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(vector + i) > *(vector + j))
            {
                aux = *(vector + i);
                *(vector + i) = *(vector + j);
                *(vector + j) = aux;
            }
        }
    }
}

int main()
{
    int n;

    cout << "==================================================" << endl;
    cout << "      ORDENAR UN ARREGLO CON PUNTEROS" << endl;
    cout << "==================================================" << endl;

    cout << "\nIngrese la cantidad de elementos: ";
    cin >> n;

    int numeros[n];

    cout << "\nIngrese los elementos del arreglo:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Elemento [" << i << "]: ";
        cin >> *(numeros + i);
    }

    ordenarArreglo(numeros, n);

    cout << "\nArreglo ordenado de menor a mayor:\n";

    for (int i = 0; i < n; i++)
    {
        cout << *(numeros + i) << " ";
    }

    cout << endl;

    return 0;
}
