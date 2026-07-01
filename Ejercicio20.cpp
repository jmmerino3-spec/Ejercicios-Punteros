#include <iostream>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

// Insertar al final de la lista
void insertar(Nodo *&inicio, int valor)
{
    Nodo *nuevo = new Nodo;
    nuevo->dato = valor;
    nuevo->siguiente = NULL;

    if (inicio == NULL)
    {
        inicio = nuevo;
    }
    else
    {
        Nodo *aux = inicio;

        while (aux->siguiente != NULL)
        {
            aux = aux->siguiente;
        }

        aux->siguiente = nuevo;
    }
}

// Mostrar la lista
void mostrar(Nodo *inicio)
{
    if (inicio == NULL)
    {
        cout << "\nLa lista esta vacia.\n";
        return;
    }

    Nodo *aux = inicio;

    cout << "\nLista:\n";

    while (aux != NULL)
    {
        cout << aux->dato << " -> ";
        aux = aux->siguiente;
    }

    cout << "NULL\n";
}

// Buscar un elemento
void buscar(Nodo *inicio, int valor)
{
    Nodo *aux = inicio;
    int posicion = 1;

    while (aux != NULL)
    {
        if (aux->dato == valor)
        {
            cout << "\nElemento encontrado en la posicion "
                 << posicion << "." << endl;
            return;
        }

        aux = aux->siguiente;
        posicion++;
    }

    cout << "\nElemento no encontrado." << endl;
}

// Eliminar un elemento
void eliminar(Nodo *&inicio, int valor)
{
    Nodo *aux = inicio;
    Nodo *anterior = NULL;

    while (aux != NULL && aux->dato != valor)
    {
        anterior = aux;
        aux = aux->siguiente;
    }

    if (aux == NULL)
    {
        cout << "\nElemento no encontrado." << endl;
        return;
    }

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

int main()
{
    Nodo *inicio = NULL;

    int opcion;
    int valor;

    do
    {
        cout << "\n======================================" << endl;
        cout << "     MENU LISTA ENLAZADA" << endl;
        cout << "======================================" << endl;
        cout << "1. Insertar elemento" << endl;
        cout << "2. Mostrar lista" << endl;
        cout << "3. Buscar elemento" << endl;
        cout << "4. Eliminar elemento" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion)
        {
            case 1:
                cout << "Ingrese el valor: ";
                cin >> valor;
                insertar(inicio, valor);
                break;

            case 2:
                mostrar(inicio);
                break;

            case 3:
                cout << "Ingrese el valor a buscar: ";
                cin >> valor;
                buscar(inicio, valor);
                break;

            case 4:
                cout << "Ingrese el valor a eliminar: ";
                cin >> valor;
                eliminar(inicio, valor);
                break;

            case 5:
                cout << "\nPrograma finalizado." << endl;
                break;

            default:
                cout << "\nOpcion no valida." << endl;
        }

    } while(opcion != 5);

    // Liberar memoria
    while (inicio != NULL)
    {
        Nodo *temp = inicio;
        inicio = inicio->siguiente;
        delete temp;
    }

    return 0;
}
