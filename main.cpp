#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector <int> v={2,4,6,8,10};

    v.push_back(20);
    v.push_back(30);

    for (int x:v)
        cout<<x<<endl;

};