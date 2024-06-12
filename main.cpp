#include <iostream>
#include <climits>
using namespace std;

int main() {

    int x=10;
    int &y =x;
    cout<<x<<endl;
    y++;
    x++;
    cout<<x<<endl;

    // int a = 10;
    // int *p= &a;
    // cout<<*p<<endl;

    // int *p = new int[5];
    // p[0]=12;
    // p[1]=13;
    // cout<<p[1]<<endl;
    //
    // delete []p;
    // p=nullptr;

    // int size;
    // cout<<"Enter number of size";
    // cin>>size;
    // int A[size];
    // cout<<sizeof A <<endl;

    // int size;
    // cout<<"Enter number of size";
    // cin>>size;
    // int *p = new int[size];
    //
    // cout<<"Enter number of size";
    // cin>>size;
    // p = new int[size];


    return 0;
}
