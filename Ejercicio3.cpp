#include <iostream>

using namespace std;

// Función que suma los elementos del arreglo utilizando punteros
int sumarArreglo(int *vector, int n)
{
    int suma = 0;

    for (int i = 0; i < n; i++)
    {
        suma += *(vector + i);
    }

    return suma;
}

int main()
{
    int n;

    cout << "==============================================" << endl;
    cout << "     SUMA DE UN ARREGLO CON PUNTEROS" << endl;
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

    cout << "\nElementos ingresados:\n";

    for (int i = 0; i < n; i++)
    {
        cout << *(numeros + i) << " ";
    }

    cout << "\n\nLa suma de los elementos es: "
         << sumarArreglo(numeros, n) << endl;

    return 0;
}
