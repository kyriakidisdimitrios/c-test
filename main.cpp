#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

template <typename T>
void fun(T p) {
    p();
}
int main(){
    [](){cout<<"Hello"<<endl;}();
    [](int x, int y){cout<<"Sum is "<<x+y<<endl;}(10,30);
    cout<<([](int x, int y){return x+y;}(10,30));
    int a=[](int x, int y){return x+y;}(10,30);
    cout<<a;

    int b=10;
    [b](){cout<<b<<endl;}();

    // auto f=[b](){cout<<b<<endl;};
    // f();
    // b++;
    // f();
    // auto fr=[&b](){cout<<b<<endl;};
    // fr();
    // b++;
    // fr(); //auksanei giati einai reference

    auto f=[&a](){cout<<a++<<endl;};
    fun(f);
    fun(f);
};