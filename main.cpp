#include <iostream>
#include <climits>
#include <string.h>
using namespace std;

// class Test {
// private: int a;
// protected: int b;
// public: int c;
//     friend void fun();
// };
//
// void fun() {
//     Test t;
//     t.a-10;
//     t.b-15;
//     t.c=9;
// }
class Your;
class My {
private: int a;
protected: int b;
public: int c;
    friend Your;
};
class Your {
    My m;
    void fun() {
        m.a-10;
        m.b-15;
        m.c=9;
    }
};
int main() {

}