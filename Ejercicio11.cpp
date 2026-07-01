#include <iostream>

using namespace std;

// Función para calcular la longitud de la cadena
int longitudCadena(char *cadena)
{
    int longitud = 0;

    while (*(cadena + longitud) != '\0')
    {
        longitud++;
    }

    return longitud;
}

// Función para invertir la cadena utilizando punteros
void invertirCadena(char *cadena)
{
    char *inicio = cadena;
    char *fin = cadena + longitudCadena(cadena) - 1;
    char aux;

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
    char texto[100];

    cout << "==============================================" << endl;
    cout << "      INVERTIR UNA CADENA CON PUNTEROS" << endl;
    cout << "==============================================" << endl;

    cout << "\nIngrese una cadena: ";
    cin.getline(texto, 100);

    invertirCadena(texto);

    cout << "\nCadena invertida: " << texto << endl;

    return 0;
}
