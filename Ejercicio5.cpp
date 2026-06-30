#include <iostream>

using namespace std;

// Función que encuentra el menor utilizando punteros
int menor(int *vector, int n)
{
    int menor = *vector;

    for (int i = 1; i < n; i++)
    {
        if (*(vector + i) < menor)
        {
            menor = *(vector + i);
        }
    }

    return menor;
}

int main()
{
    int n;

    cout << "==============================================" << endl;
    cout << "      MENOR DE UN ARREGLO CON PUNTEROS" << endl;
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

    cout << "\n\nEl numero menor es: " << menor(numeros, n) << endl;

    return 0;
}
