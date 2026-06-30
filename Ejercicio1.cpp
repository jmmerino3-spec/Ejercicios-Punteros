#include <iostream>

using namespace std;

// Función que intercambia los valores mediante punteros
void intercambiar(int *a, int *b)
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int num1, num2;

    cout << "==========================================" << endl;
    cout << "      INTERCAMBIO DE DOS NUMEROS" << endl;
    cout << "           UTILIZANDO PUNTEROS" << endl;
    cout << "==========================================" << endl;

    cout << "\nIngrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "\nValores antes del intercambio" << endl;
    cout << "Numero 1 = " << num1 << endl;
    cout << "Numero 2 = " << num2 << endl;

    intercambiar(&num1, &num2);

    cout << "\nValores despues del intercambio" << endl;
    cout << "Numero 1 = " << num1 << endl;
    cout << "Numero 2 = " << num2 << endl;

    return 0;
}
