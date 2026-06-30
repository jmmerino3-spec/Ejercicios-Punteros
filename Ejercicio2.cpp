#include <iostream>

using namespace std;

// Función que realiza la suma mediante punteros
int sumar(int *a, int *b)
{
    return (*a + *b);
}

int main()
{
    int num1, num2;
    int resultado;

    cout << "==========================================" << endl;
    cout << "          SUMA CON PUNTEROS" << endl;
    cout << "==========================================" << endl;

    cout << "\nIngrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    resultado = sumar(&num1, &num2);

    cout << "\nPrimer numero: " << num1 << endl;
    cout << "Segundo numero: " << num2 << endl;
    cout << "La suma es: " << resultado << endl;

    return 0;
}
