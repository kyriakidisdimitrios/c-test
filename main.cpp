#include <iostream>
#include <climits>
#include <string.h>
using namespace std;

class Complex {
private:
    int real;
    int img;
public:
    Complex(int r=0, int i=0) {
        real = r;
        img = i;
    }
    void display() {
        cout<<real<<"+i"<<img<<endl;
    }
    //friend Complex operator+(Complex c1, Complex c2);
    // friend ostream & operator<<(ostream &out, Complex &c);
    //me allon tropo
    friend void operator<<(ostream &out, Complex &c);
};

// ostream & operator<<(ostream &out, Complex &c) {
//     out<<c.real<<"+i"<<c.img<<endl;
//     return out;
// }
void operator<<(ostream &out, Complex &c) {
    out<<c.real<<"+i"<<c.img<<endl;
    //return out;
}
int main() {
    Complex c(10,5);
    //c.display();
    //cout<<c; 8elw na kanw operator gia auto
    cout<<c;

    //cout<<c<<endl; //auto einai la8os, gia otidhpote meta to c ean einai void operator, alla mono gia "ostream & operator"
    // einai to idio me to na legame operator<<(cout,c);
    return 0;
}
