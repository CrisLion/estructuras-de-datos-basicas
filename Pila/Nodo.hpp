template<typename T> class Nodo{
public:
    Nodo<T>* siguiente;
    T dato;
    Nodo(T dato) : dato(dato), siguiente(nullptr) {}
};