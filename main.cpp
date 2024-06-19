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
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    void setLength(int length) {
        this->length = length;
    }
    void setBreadth(int breadth) {
        this->breadth = breadth;
    }
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
// Definition of default constructor
Rectangle::Rectangle() : length(0), breadth(0) {}

// Definition of destructor
Rectangle::~Rectangle() {}


class Cuboid:public Rectangle {
private:
        int height;
public:
    //Cuboid();
    Cuboid(int h) {
        this->height=h;
    }
    int getHeight() {
        return height;
    }
    void setHeight(int height) {
        this->height = height;
    }
    int volume() {
        return getLength()*getBreadth()*height;
    }

};
int main() {
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(7);
    cout<<"Volume is: "<<c.volume()<<endl;
}
