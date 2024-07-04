#include <iostream>
#include <climits>
#include <string.h>
using namespace std;

int division(int a, int b) {
    if (b==0)
        throw 1;
    else
        return a/b;
}

int main() {
    int x=10, y=0, z;
    try{
    //z=x/y;
         if (y==0)
             throw 10;

        //z=division(x,y);
        z=x/y;
        cout<<z<<endl;

    cout<<x<<endl;
    }
    catch(int e) {
        cout<<"Division by zero "<<e<<endl;
    }
    cout<<"Bye"<<endl;
};