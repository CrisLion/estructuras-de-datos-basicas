#include "Nodo.hpp"
#include <iostream>
using std::cout;
using std::endl;

template <typename T> class Cola{
private:
    Nodo<T>* front;
    Nodo<T>* rear;
    int n;
public:
    Cola(): front(nullptr), rear(nullptr), n(0) {}

    void enQueue(T valor){
        Nodo<T>* nuevoNodo = new Nodo<T>(valor);
        n++;
        if (front == nullptr){
            front = rear =nuevoNodo;
            return;
        }
        rear->siguiente = nuevoNodo;
        rear = nuevoNodo;
    }

    void deQueue(){
        if (front != nullptr){
            Nodo<T>* aux = front; 
            front = front->siguiente;
            delete aux;
            n--;
        }
        if (front == nullptr) rear = nullptr;
    }

    int size(){
       return n; 
    }

    bool isEmpty(){
        return !front;
    }

    T Front(){
        return front->dato;
    }

};