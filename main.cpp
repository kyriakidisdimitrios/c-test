#include <cstdarg>
#include <iostream>
#include <memory>

using namespace std;

int sum(int n, ...) {
    va_list list;
    va_start(list, n); //n posa arguments einai
    int x;
    int s=0;

    for (int i=0;i<n;i++) {
        x=va_arg(list, int);
        s+=x;
    }
    return s;
}
int main() {
    cout<<sum(3,10,20,30)<<endl;
}

// class Rectangle {
//     int length;
//     int breadth;
// public:
//     Rectangle(int l, int b) {
//         length=l;
//         breadth=b;
//     }
//     int area() {
//         return length*breadth;
//     }
//
// };
// int main(){
//     unique_ptr<Rectangle> ptr(new Rectangle(10,5)); //to new to kanei sto Heap
//     cout<<ptr->area();
//     unique_ptr<Rectangle> ptr2;
//     ptr2=move(ptr);
//     cout<<ptr2->area();
//     //cout<<ptr->area(); //den ginetai
//
//     shared_ptr<Rectangle> ptr3(new Rectangle(10,5));
//     cout<<ptr3.use_count()<<endl;
//
// };