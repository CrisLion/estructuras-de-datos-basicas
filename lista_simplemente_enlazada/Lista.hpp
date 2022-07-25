#include "Nodo.hpp"
#include <iostream>
using std::cout;
using std::endl;

template <typename T> class Lista{
    Nodo<T>* cabecera; // apunta al primer elemento
    Nodo<T>* final; // apunta al ultimo elemento
public:
    Lista(): cabecera(nullptr), final(nullptr){} // La lista esta vacia
    ~Lista() {}
    Nodo<T>* get_primero() { return cabecera; }
    Nodo<T>* get_ultimo() {return final;}

    void push_front(T valor){
        Nodo<T>* nuevoNodo = new Nodo<T>(valor);
        nuevoNodo->siguiente = cabecera;
        if (cabecera == nullptr) final = nuevoNodo;
        cabecera = nuevoNodo;
    }

    void push_back(T valor){
        Nodo<T>* nuevoNodo = new Nodo<T>(valor);
        if (final != nullptr) final->siguiente = nuevoNodo;
        else cabecera = nuevoNodo;
        final = nuevoNodo;
    }

    Nodo<T>* search(T valor){
        if (cabecera != nullptr){
            for(Nodo<T>* Indice = cabecera; Indice != nullptr; Indice = Indice->siguiente){
                if (Indice->dato == valor) return Indice;
            }
        }
        return nullptr;
    }

    void delet3(T valor){
        if (cabecera != nullptr){
            Nodo<T>* ant = nullptr, *pos = cabecera;
            bool seEncontro = false;
            
            while (!seEncontro && pos != nullptr){
                if (pos->dato != valor){
                    ant = pos;
                    pos = pos->siguiente;
                }
                else{
                    seEncontro = true;
                }
            }

            if (seEncontro){
                
                if (ant != nullptr) { // no es el primero
                    ant->siguiente = pos->siguiente;
                }
                else{
                    cabecera = cabecera->siguiente;
                    if (cabecera == nullptr) final = nullptr;
                }
                delete pos;
            }
        }
    }

    void print(){
        cout<<"[";
        if (cabecera != nullptr){
            for (Nodo<T>* Indice = cabecera; Indice != nullptr; Indice = Indice->siguiente){
                cout<<Indice->dato;
                if (Indice->siguiente != nullptr) cout<<", ";
            }
        }
        cout<<"]\n";
    }
};