#include <iostream>

using namespace std;

int main()
{
    int n;
    float suma = 0, promedio;

    cout << "===================================================" << endl;
    cout << "   PROMEDIO DE UN ARREGLO CON MEMORIA DINAMICA" << endl;
    cout << "===================================================" << endl;

    cout << "\nIngrese la cantidad de elementos: ";
    cin >> n;

    // Reserva de memoria dinámica
    int *numeros = new int[n];

    cout << "\nIngrese los elementos del arreglo:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Elemento [" << i << "]: ";
        cin >> *(numeros + i);
    }

    cout << "\nElementos ingresados:\n";

    for (int i = 0; i < n; i++)
    {
        cout << *(numeros + i) << " ";
        suma += *(numeros + i);
    }

    promedio = suma / n;

    cout << "\n\nLa suma es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;

    // Liberar memoria
    delete[] numeros;

    return 0;
}
