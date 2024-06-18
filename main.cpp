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
    friend Complex operator+(Complex c1, Complex c2);

// public:
//     int real;
//     int img;
//     Complex add(Complex c) {
//         Complex temp;
//         temp.real=real + c.real;
//         temp.img=img + c.img;
//         return temp;
//     }
//     Complex operator+(Complex c) {
//         Complex temp;
//         temp.real=real + c.real;
//         temp.img=img + c.img;
//         return temp;
//     }
};

Complex operator+(Complex c1, Complex c2) {
    Complex temp;
    temp.real=c1.real + c2.real;
    temp.img=c1.img + c2.img;
    return temp;
}
int main() {
    Complex c1(5,3), c2(10,5),c3;
    c3=c1+c2;
    c3.display();
    c3=operator+(c2,c3); //to idio me to pane
    c3.display();
    // Complex c1,c2,c3;
    // c1.real=5; c1.img=4;
    // c2.real=10; c2.img=5;
    //
    //
    // c3= c1.add(c2);
    // c3= c2+c1;
    // cout<<c3.real<<"+i"<<c3.img<<endl;


    return 0;
}
