#include <iostream>
#include <climits>
#include <string.h>
using namespace std;

class Base {
public:
    //void fun() {
    virtual void fun() {
        cout<<"fun of base"<<endl;
    }
};
class Derived: public Base {
public:
    void fun() {
        cout<<"fun of derived"<<endl;
    }
};
int main() {

    Derived d;
    //d.fun();

    //Base *ptr = &d;
    Base *ptr = new Derived();
    ptr->fun();


    return 0;
}


// class Base {
// public:
//     void fun1() {
//         cout<<"fun1 of base"<<endl;
//     }
// };
// class Derived: public Base {
//     public:
//     void fun2() {
//         cout<<"fun2 of derived"<<endl;
//     }
// };
// int main() {
//
//     Derived d; //fun1 of base fun2 of derived
//     d.fun1();
//     d.fun2();
//
//     Derived d1; //fun1 of base fun2 of derived
//     Base *ptr = &d1;
//     ptr->fun1();
//     //ptr->fun2(); //den to blepei
//
//     Base b;
//     //Derived *ptr2 = &b; //den epitepetai
//
//     return 0;
// }
