#include <iostream>

using namespace std;

// Función que encuentra el mayor utilizando punteros
int mayor(int *vector, int n)
{
    int mayor = *vector;

    for (int i = 1; i < n; i++)
    {
        if (*(vector + i) > mayor)
        {
            mayor = *(vector + i);
        }
    }

    return mayor;
}

int main()
{
    int n;

    cout << "==============================================" << endl;
    cout << "      MAYOR DE UN ARREGLO CON PUNTEROS" << endl;
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

    cout << "\nElementos del arreglo:\n";

    for (int i = 0; i < n; i++)
    {
        cout << *(numeros + i) << " ";
    }

    cout << "\n\nEl numero mayor es: " << mayor(numeros, n) << endl;

    return 0;
}
