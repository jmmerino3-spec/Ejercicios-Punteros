#include <iostream>

using namespace std;

// Función para copiar una cadena utilizando punteros
void copiarCadena(char *origen, char *destino)
{
    while (*origen != '\0')
    {
        *destino = *origen;
        origen++;
        destino++;
    }

    *destino = '\0';
}

int main()
{
    char cadena1[100];
    char cadena2[100];

    cout << "==========================================" << endl;
    cout << "      COPIAR CADENA CON PUNTEROS" << endl;
    cout << "==========================================" << endl;

    cout << "\nIngrese una cadena: ";
    cin.getline(cadena1, 100);

    copiarCadena(cadena1, cadena2);

    cout << "\nCadena original: " << cadena1 << endl;
    cout << "Cadena copiada : " << cadena2 << endl;

    return 0;
}
