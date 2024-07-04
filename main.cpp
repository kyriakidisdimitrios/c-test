#include <iostream>

using namespace std;

#define max(x,y) (x>y? x:y)
#define msg(x) #x
#define PI 3.1425
#ifndef PI
#define PI 3
#endif

int main() {
    //cout<<PI;
    cout<<max(10,20);
    cout<<msg(hello);
};