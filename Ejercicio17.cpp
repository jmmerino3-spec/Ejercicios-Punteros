#include <iostream>

using namespace std;

// Función para contar cuántas veces aparece un carácter
int contarCaracter(char *cadena, char caracter)
{
    int contador = 0;

    while (*cadena != '\0')
    {
        if (*cadena == caracter)
        {
            contador++;
        }

        cadena++;
    }

    return contador;
}

int main()
{
    char texto[100];
    char letra;

    cout << "===================================================" << endl;
    cout << "    BUSCAR UN CARACTER CON PUNTEROS" << endl;
    cout << "===================================================" << endl;

    cout << "\nIngrese una cadena: ";
    cin.getline(texto, 100);

    cout << "Ingrese el caracter que desea buscar: ";
    cin >> letra;

    int cantidad = contarCaracter(texto, letra);

    if (cantidad > 0)
    {
        cout << "\nEl caracter '" << letra << "' aparece "
             << cantidad << " veces en la cadena." << endl;
    }
    else
    {
        cout << "\nEl caracter '" << letra
             << "' no se encuentra en la cadena." << endl;
    }

    return 0;
}
