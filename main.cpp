#include <iostream>
#include <climits>
#include <string.h>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;
public:
    Rectangle() {
        setLength(1);
        setBreadth(1);
    }
    Rectangle(int l, int b) {
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle &r) {
        length=r.length;
        breadth=r.breadth;
    }
    void setLength(int l) {
        if (l>0)
            length = l;
        else
            length = 0;
    }
    void setBreadth(int b) {
        if (b>0)
            breadth = b;
        else
            breadth=0;
    }
    int getLength() {
        return length;
    }
    int getBreadth() {
        return breadth;
    }
    int area() {
        return getLength()*getBreadth();
    }
    int perimeter() {
        return 2*(length*breadth);
    }

};


int main() {



    //Rectangle r1(10,5);
    //Rectangle r1(); //auto mperdeuei ton compiler
    Rectangle r1;
    Rectangle r2(r1);
    cout<<r2.area()<<endl;


    // Rectangle r1;
    // Rectangle *ptr;
    // //ptr = &r1; //auto to bazei ston stack
    // ptr = new Rectangle; //auto to bazei sto heap
    // ptr->length=10;
    // ptr->breadth=5;
    // cout<<ptr->area()<<endl;
    // cout<<ptr->perimeter()<<endl;

    return 0;
}
