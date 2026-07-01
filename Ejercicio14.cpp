#include <iostream>
#include <string>

using namespace std;

// Estructura para almacenar los datos del estudiante
struct Estudiante
{
    string nombre;
    int edad;
};

int main()
{
    int n;

    cout << "======================================================" << endl;
    cout << "      REGISTRO DE ESTUDIANTES CON PUNTEROS" << endl;
    cout << "======================================================" << endl;

    cout << "\nIngrese la cantidad de estudiantes: ";
    cin >> n;
    cin.ignore();

    // Reserva de memoria dinámica
    Estudiante *estudiantes = new Estudiante[n];

    cout << "\nIngrese los datos de los estudiantes:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nEstudiante " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, (estudiantes + i)->nombre);

        cout << "Edad: ";
        cin >> (estudiantes + i)->edad;
        cin.ignore();
    }

    cout << "\n========== LISTA DE ESTUDIANTES ==========\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nEstudiante " << i + 1 << endl;
        cout << "Nombre: " << (estudiantes + i)->nombre << endl;
        cout << "Edad: " << (estudiantes + i)->edad << " años" << endl;
    }

    // Liberar memoria
    delete[] estudiantes;

    return 0;
}
