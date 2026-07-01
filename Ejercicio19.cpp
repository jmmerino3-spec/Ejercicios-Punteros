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
    Nodo *anterior = NULL;

    int n, valor, eliminar;

    cout << "========================================================" << endl;
    cout << "      ELIMINAR UN NODO DE UNA LISTA ENLAZADA" << endl;
    cout << "========================================================" << endl;

    cout << "\n¿Cuantos elementos desea ingresar?: ";
    cin >> n;

    // Crear la lista
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

    cout << "\nIngrese el numero que desea eliminar: ";
    cin >> eliminar;

    aux = inicio;
    anterior = NULL;

    while (aux != NULL && aux->dato != eliminar)
    {
        anterior = aux;
        aux = aux->siguiente;
    }

    if (aux == NULL)
    {
        cout << "\nEl elemento no se encuentra en la lista." << endl;
    }
    else
    {
        if (anterior == NULL)
        {
            inicio = aux->siguiente;
        }
        else
        {
            anterior->siguiente = aux->siguiente;
        }

        delete aux;

        cout << "\nElemento eliminado correctamente." << endl;
    }

    cout << "\nLista actualizada:\n";

    aux = inicio;

    while (aux != NULL)
    {
        cout << aux->dato << " -> ";
        aux = aux->siguiente;
    }

    cout << "NULL" << endl;

    // Liberar memoria restante
    aux = inicio;

    while (aux != NULL)
    {
        Nodo *temp = aux;
        aux = aux->siguiente;
        delete temp;
    }

    return 0;
}
