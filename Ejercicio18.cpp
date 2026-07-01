#include <iostream>

using namespace std;

// Estructura del nodo
struct Nodo
{
    int dato;
    Nodo *siguiente;
};

int main()
{
    Nodo *inicio = NULL;
    Nodo *nuevo = NULL;
    Nodo *aux = NULL;

    int n, valor;

    cout << "==================================================" << endl;
    cout << "      LISTA ENLAZADA SIMPLE CON PUNTEROS" << endl;
    cout << "==================================================" << endl;

    cout << "\n¿Cuantos elementos desea ingresar?: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> valor;

        nuevo = new Nodo;
        nuevo->dato = valor;
        nuevo->siguiente = NULL;

        if (inicio == NULL)
        {
            inicio = nuevo;
        }
        else
        {
            aux = inicio;

            while (aux->siguiente != NULL)
            {
                aux = aux->siguiente;
            }

            aux->siguiente = nuevo;
        }
    }

    cout << "\nElementos de la lista:\n";

    aux = inicio;

    while (aux != NULL)
    {
        cout << aux->dato << " -> ";
        aux = aux->siguiente;
    }

    cout << "NULL" << endl;

    // Liberar memoria
    aux = inicio;

    while (aux != NULL)
    {
        Nodo *temp = aux;
        aux = aux->siguiente;
        delete temp;
    }

    return 0;
}
