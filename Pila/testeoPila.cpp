#include "Pila.hpp"

int main(){

    Pila<int> p;

    p.push(1);
    p.push(2);
    p.push(3);
    cout<<"El top es: "<<p.Top()<<endl;
    p.pop();
    cout<<"Eliminamos un elemento. Ahora el top es "<<p.Top()<<endl;
    p.push(4);
    p.push(5);
    p.push(6);
    cout<<"Agregamos 3 elementos mas. Ahora el tamano es "<<p.size()<<endl;

    while (!p.isEmpty()){
        cout<<p.Top()<<endl;
        p.pop();
    }
    
    return 0;
}