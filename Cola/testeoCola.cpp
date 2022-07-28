#include "Cola.hpp"

int main(){
    Cola<int> c;

    c.enQueue(1);
    c.enQueue(2);
    c.enQueue(3);
    c.enQueue(4);

    while (!c.isEmpty())
    {
        cout<<c.Front()<<endl;
        c.deQueue();
        cout<<"Tam: "<<c.size()<<endl;
    }
    
    return 0;
}