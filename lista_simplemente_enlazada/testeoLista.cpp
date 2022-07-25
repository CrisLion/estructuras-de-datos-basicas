#include "Lista.hpp"
using std::cin;
int main(){

    Lista<int> l;
    int opc;
    bool continuar = true;
    while (continuar){
        cout<<"1. Insertar al frente"<<endl;
        cout<<"2. Insertar al ultimo"<<endl;
        cout<<"3. Imprimir Nodo"<<endl;
        cout<<"4. Buscar dato"<<endl;
        cout<<"5. Eliminar Nodo"<<endl;
        cout<<"6. Salir"<<endl;
        cin>>opc;
        switch (opc)
        {
        case 1:
            cin>>opc;
            l.push_front(opc);
            break;
        case 2:
            cin>>opc;
            l.push_back(opc);
            break;
        case 3:
            l.print();
            break;
        case 4:
            cin>>opc;
            cout<<l.search(opc)<<endl;
            break;
        case 5:
            cin>>opc;
            l.delet3(opc);
            break;
        case 6:
            continuar = false;
            break;
        
        }
        cout<<endl<<endl;
    }

    return 0;
}
