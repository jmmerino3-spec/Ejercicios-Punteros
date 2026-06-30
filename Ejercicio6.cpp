#include <iostream>

using namespace std;

// Función para calcular la longitud de una cadena usando punteros
int longitudCadena(char *cadena)
{
    int contador = 0;

    while (*cadena != '\0')
    {
        contador++;
        cadena++;
    }

    return contador;
}

int main()
{
    char texto[100];

    cout << "==========================================" << endl;
    cout << "   LONGITUD DE UNA CADENA CON PUNTEROS" << endl;
    cout << "==========================================" << endl;

    cout << "\nIngrese una cadena: ";
    cin.getline(texto, 100);

    cout << "\nLa cadena ingresada es: " << texto << endl;
    cout << "La longitud de la cadena es: "
         << longitudCadena(texto) << " caracteres." << endl;

    return 0;
}
