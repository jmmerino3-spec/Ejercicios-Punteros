#include <iostream>

using namespace std;

// Funciones de las operaciones
float sumar(float a, float b)
{
    return a + b;
}

float restar(float a, float b)
{
    return a - b;
}

float multiplicar(float a, float b)
{
    return a * b;
}

float dividir(float a, float b)
{
    if (b == 0)
    {
        cout << "\nError: No se puede dividir para cero." << endl;
        return 0;
    }

    return a / b;
}

int main()
{
    float num1, num2;
    int opcion;

    // Declaración del puntero a función
    float (*operacion)(float, float);

    cout << "==============================================" << endl;
    cout << "      CALCULADORA CON PUNTEROS A FUNCIONES" << endl;
    cout << "==============================================" << endl;

    cout << "\nIngrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "\nSeleccione una opcion:" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch(opcion)
    {
        case 1:
            operacion = sumar;
            break;
        case 2:
            operacion = restar;
            break;
        case 3:
            operacion = multiplicar;
            break;
        case 4:
            operacion = dividir;
            break;
        default:
            cout << "\nOpcion no valida." << endl;
            return 0;
    }

    cout << "\nResultado: " << operacion(num1, num2) << endl;

    return 0;
}
