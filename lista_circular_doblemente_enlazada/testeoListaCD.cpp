#include"ListaCD.hpp"
using std::cin;

int main(){

    ListaCD<int> l;
    int opc;
    int nuevoValor;
    bool continuar = true;
    while (continuar){
        cout<<"1. Insertar al frente"<<endl;
        cout<<"2. Insertar al ultimo"<<endl;
        cout<<"3. Imprimir lista"<<endl;
        cout<<"4. Insertar elemento hacia atras"<<endl;
        cout<<"5. Eliminar Nodo"<<endl;
        cout<<"6. Salir"<<endl;
        cin>>opc;
        switch (opc)
        {
        case 1:
            cin>>opc;
            l.push_front(opc);
            cout<<l.cabecera<<endl;
            break;
        case 2:
            cin>>opc;
            l.push_back(opc);
            break;
        case 3:
            l.print();
            break;
        /*case 4:
            cin>>opc;
            cin>>nuevoValor;
            l.insertBack(opc,nuevoValor);
            break;
        
        case 5:
            cin>>opc;
            l.deleteNode(opc);
            break;
        */case 6:
            continuar = false;
            break;
        
        }
        cout<<endl<<endl;
    }
    return 0;
}