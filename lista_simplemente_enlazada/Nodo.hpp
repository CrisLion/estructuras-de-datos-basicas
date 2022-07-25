template<typename T> class Nodo{
public:
    T dato;
    Nodo* siguiente;

    Nodo(): siguiente(nullptr) {}

    Nodo(T dato){
        this->dato = dato;
        this->siguiente = nullptr;
    }
};