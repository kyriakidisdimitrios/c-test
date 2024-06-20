#include <iostream>
#include <climits>
#include <string.h>
using namespace std;

class Parent{
private:
    private: int a;
    protected: int b;
    public: int c;
    void funParent() {
        a=10;
        b=15;
        c=15;
    }
};
class Child: protected Parent {
public:
    void funChild() {
        //a=10;
        b=5;
        c=15;
    }
};

class GrantChild: public Child {
public:
    void funGrantChild() {
        //a=10;
        b=5;
        c=15;
    }
};
int main() {
    Child c;
    //c.a=10;
    //c.b=5;
    //c.c=20;
    return 0;
}
