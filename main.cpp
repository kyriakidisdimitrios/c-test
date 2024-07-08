#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout<<"Constructor of Base"<<endl;
    }
    virtual ~Base() { //polu shmantikh h virtual brosta sthn ~Base()
        cout<<"Destructor of Base"<<endl;
    }
};
class Derived: public Base {
public:
    Derived() {
        cout<<"Constructor of Derived"<<endl;
    }
    ~Derived() {
        cout<<"Destructor of Derived"<<endl;
    }
};
void fun() {
    Base *p = new Derived();
    delete p; //prepei na to sbhsw giati brisketai sth Heap
    //Derived d;

};
int main() {
    fun();
};