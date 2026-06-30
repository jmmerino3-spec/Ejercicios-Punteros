#include <iostream>

using namespace std;

// Función para invertir el arreglo utilizando punteros
void invertirArreglo(int *vector, int n)
{
    int *inicio = vector;
    int *fin = vector + n - 1;
    int aux;

    while (inicio < fin)
    {
        aux = *inicio;
        *inicio = *fin;
        *fin = aux;

        inicio++;
        fin--;
    }
}

int main()
{
    int n;

    cout << "==============================================" << endl;
    cout << "      INVERTIR UN ARREGLO CON PUNTEROS" << endl;
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

    cout << "\nArreglo original:\n";

    for (int i = 0; i < n; i++)
    {
        cout << numeros[i] << " ";
    }

    invertirArreglo(numeros, n);

    cout << "\n\nArreglo invertido:\n";

    for (int i = 0; i < n; i++)
    {
        cout << *(numeros + i) << " ";
    }

    cout << endl;

    return 0;
}
