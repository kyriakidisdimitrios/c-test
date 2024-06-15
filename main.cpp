#include <iostream>
#include <climits>
#include <string.h>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;
public:
    Rectangle();
    Rectangle(int length, int breadth);
    //this->length=length
    Rectangle(Rectangle &r);
    void setLength(int l);
    void setBreadth(int b);
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};


int main() {
    Rectangle r1(10,10);
    cout<<"Area "<<r1.area()<<endl;
    if(r1.isSquare())
        cout<<"Yes"<<endl;
    return 0;
}
Rectangle::Rectangle() { //scope resolution for default constructor
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int l, int b) { //scope resolution for default constructor
    length=l;
    breadth=b;
}
Rectangle::Rectangle(Rectangle &r) { //scope resolution for default constructor
    length=r.length;
    breadth=r.breadth;
}
void Rectangle::setLength(int l) {
    length=l;
}
void Rectangle::setBreadth(int b) {
    breadth=b;
}
int Rectangle::area() {
    return length*breadth;
}
int Rectangle::perimeter() {
    return 2*(length+breadth);
}
bool Rectangle::isSquare() {
    return length==breadth;
}
Rectangle::~Rectangle() { //sto telos 8a fotwnetai mono tou
    cout<<"Rectangle destroyed";
}
