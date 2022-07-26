#include <iostream>
#include "Nodo.hpp"
using std::cout;
using std::endl;

template <typename T> class ListaD{
    Nodo<T>* cabecera;
public:
    ListaD() : cabecera(nullptr) {}

    void push_front(T valor){
        Nodo<T>* nuevoNodo = new Nodo<T>(valor);
        nuevoNodo->posterior = cabecera;
        if (cabecera != nullptr) cabecera->anterior = nuevoNodo;
        cabecera = nuevoNodo;
    }

    void push_back(T valor){
        Nodo<T>* ultimo;
        Nodo<T>* nuevoNodo = new Nodo<T>(valor);
        if (cabecera == nullptr) {cabecera = nuevoNodo; return;}
        for(Nodo<T>* i = cabecera; i != nullptr; i = i->posterior){
            ultimo = i;
        }
        ultimo->posterior = nuevoNodo;
        nuevoNodo->anterior = ultimo;
    }

    void deleteNode(T valor) {
        bool seEncontro = false;
        Nodo<T>* nodoABorrar;
        //Encontrando el nodo con su valor
        for(Nodo<T>* i = cabecera; i != nullptr && seEncontro == false; i = i->posterior){
            if (i->dato == valor) {nodoABorrar = i; seEncontro = true;}
        }

        if (cabecera == nullptr){ //Si la lista esta vacia
            return;
        }

        if (seEncontro && nodoABorrar == cabecera){ //Si el nodo a borrar es el primer elemento
            if(nodoABorrar->posterior != nullptr) nodoABorrar->posterior->anterior = nullptr;
            cabecera = nodoABorrar->posterior;
        }
        else if (seEncontro && nodoABorrar->posterior == nullptr){ //Si el nodo a borrar es el ultimo elemento
            nodoABorrar->anterior->posterior = nullptr;
        }
        else if (seEncontro){
            nodoABorrar->anterior->posterior = nodoABorrar->posterior;
            nodoABorrar->posterior->anterior = nodoABorrar->anterior;
        }

        delete nodoABorrar;
    }

    void insertBack(T valor, T nuevoValor) {
        bool seEncontro = false;
        Nodo<T>* nodoEncontrado;

        //Encontrando el nodo con su valor
        for(Nodo<T>* i = cabecera; i != nullptr && seEncontro == false; i = i->posterior){
            if (i->dato == valor) {nodoEncontrado = i; seEncontro = true;}
        }

        if (cabecera == nullptr || seEncontro == false){ //Si la lista esta vacia
            return;
        }

        Nodo<T>* nuevoNodo = new Nodo<T>(nuevoValor);

        if (seEncontro && nodoEncontrado == cabecera){ //Si el nodo encontrado es el primer elemento
            cabecera->anterior = nuevoNodo;
            nuevoNodo->posterior = cabecera;
            cabecera = nuevoNodo;
        }
        else if (seEncontro){ ////Si el nodo encontrado es el ultimo elemento
            nodoEncontrado->anterior->posterior = nuevoNodo;
            nuevoNodo->anterior = nodoEncontrado->anterior;
            nodoEncontrado->anterior = nuevoNodo;
            nuevoNodo->posterior = nodoEncontrado;
        }
    }

    void print(){
        Nodo<T>* final;
        if (cabecera == nullptr) return;
        for(Nodo<T>* i = cabecera; i != nullptr; i= i->posterior){
            cout<<i->dato<<" ";
            final = i;
        }
        cout<<endl;
        for(Nodo<T>* i = final; i != nullptr; i= i->anterior){
            cout<<i->dato<<" ";
        }
        cout<<endl;
    }
};