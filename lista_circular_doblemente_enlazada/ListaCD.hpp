#include <iostream>
#include "Nodo.hpp"
using std::cout;
using std::endl;

template <typename T> class ListaCD{
public:
    Nodo<T>* cabecera;

    ListaCD() : cabecera(nullptr) {}

    void push_front(T valor) {
        Nodo<T>* nuevoNodo = new Nodo<T>(valor);
        if (cabecera != nullptr){
            Nodo<T>* final = cabecera->anterior;
            nuevoNodo->posterior = cabecera;
            nuevoNodo->anterior = final;
            cabecera->anterior = nuevoNodo;
            final->posterior = nuevoNodo;
            cabecera = nuevoNodo;
        }
        else{
            nuevoNodo->posterior = nuevoNodo;
            nuevoNodo->anterior = nuevoNodo;
            cabecera = nuevoNodo;
        }
    }

    void push_back(T valor){
        Nodo<T>* nuevoNodo = new Nodo<T>(valor);
        if (cabecera != nullptr){
            Nodo<T>* final = cabecera->anterior;
            nuevoNodo->posterior = cabecera;
            nuevoNodo->anterior = final;
            final->posterior = nuevoNodo;
            cabecera->anterior = nuevoNodo;
        }
        else{
            nuevoNodo->posterior = nuevoNodo;
            nuevoNodo->anterior = nuevoNodo;
            cabecera = nuevoNodo;
        }
    }

    void print(){
        if (cabecera == nullptr) return;

        Nodo<T>* i = cabecera;
        for(i; i->posterior != cabecera; i = i->posterior){
            cout<<i->dato<<" ";
        }
        cout<<i->dato;
        cout<<endl;

        i = cabecera->anterior;
        Nodo<T>*final = i;
        for(i; i->anterior != final; i = i->anterior){
            cout<<i->dato<<" ";
        }
        cout<<i->dato;
        cout<<endl;

    }
};
