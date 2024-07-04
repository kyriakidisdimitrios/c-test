#include <iostream>

using namespace std;

#define max(x,y) (x>y? x:y)
#define msg(x) #x
#define PI 3.1425
#ifndef PI
#define PI 3
#endif

namespace first {
    void fun() {
        cout<<"first"<<endl;
    }
}
namespace second {
    void fun() {
        cout<<"second"<<endl;
    }
}
using namespace first;
int main() {
    //cout<<PI;
    //cout<<max(10,20);
    //cout<<msg(hello);
    fun();
    second::fun();
    std::cout<<"hello";
};