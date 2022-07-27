#include "Nodo.hpp"
#include <iostream>
using std::endl;
using std::cout;

template <typename T> class Pila{
private:
    Nodo<T>* top;
    int n;
public:
    Pila() : top(nullptr), n(0) {};

    void push(T valor){
        Nodo<T>* nuevoNodo = new Nodo<T>(valor);
        nuevoNodo->siguiente = top;
        top = nuevoNodo;
        n++;
    }

    void pop(){
        if (top != nullptr){
            Nodo<T>* aux = top;
            top = top->siguiente;
            delete aux;
            n--;
        }
    }

    T Top(){
        if (top != nullptr){
            return top->dato;
        }
        cout<<"la pila esta vacia"<<endl;
        return 0;
    }

    bool isEmpty(){
        return !top;
    }

    int size(){
        return n;
    }
};