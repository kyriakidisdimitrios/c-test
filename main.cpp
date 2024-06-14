#include <iostream>
#include <climits>
#include <string.h>
using namespace std;


int * fun() {
    int *p = new int[5]; //edw einai katanemhmeno sto heap
    for (int i=0;i<5;i++) {
        p[i]=5*i;
    }
    return p;

    // int x=10; // auto den mporei na epistrafei giati den einai heap
    // return &x;

}
// void swap(int *a, int *b) {
//     int temp;
//     temp=*b;
//     *b=*a;
//     *a=temp;
// }
// void swap(int &a, int &b) {
//     int temp;
//     temp = a;
//     a=b;
//     b=temp;
// }

int main() {
    int *q=fun();
    for (int i=0;i<5;i++) {
        cout<<q;
    }
    // int x=10, y=20;
    // //swap(&x, &y);
    // swap(x, y);
    // cout<<x<<y;


return 0;
}
