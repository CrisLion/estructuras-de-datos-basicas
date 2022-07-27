template<typename T> class Nodo{
public:
    T dato;
    Nodo<T>* anterior;
    Nodo<T>* posterior;
    Nodo(T dato): dato(dato), anterior(nullptr), posterior(nullptr) {}  
};