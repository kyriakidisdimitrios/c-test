#include <iostream>
using namespace std;

class Demo {
    int *p;
public:
    Demo() {
        p = new int[10]; //epeidi einai sto Heap, prepei na to sbisw ston destructor
        cout<<"Constructor of Demo"<<endl;
    }
    ~Demo() {
        delete []p;
        cout<<"Destructor of Demo"<<endl;
    }
};
void fun() {
    //Demo d; //auto ektelese kai contructor kai destructor, giati dhmiourgh8hke sto Stack

    Demo *p = new Demo(); //auto ektelese mono constructor
    //edw to object dhmiourgeite dynamika sto Heap, opote den ekteleitai o destructor
    delete p;
}
int main() {
    fun();
};