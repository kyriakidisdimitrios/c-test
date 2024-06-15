#include <iostream>
#include <climits>
#include <string.h>
using namespace std;

class Rectangle {
public:
    int length;
    int breadth;

    int area() {
        return length*breadth;
    }
    int perimeter() {
        return 2*(length*breadth);
    }
};


int main() {
    Rectangle r1;
    Rectangle *ptr;
    //ptr = &r1; //auto to bazei ston stack
    ptr = new Rectangle; //auto to bazei sto heap
    ptr->length=10;
    ptr->breadth=5;
    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;

    return 0;
}
