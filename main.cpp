#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <set>
using namespace std;


int main() {
    //vector <int> v={2,4,6,8,10};
    //list <int> v={2,4,6,8,10};
    //forward_list <int> v={2,4,6,8,10};
    set <int> v={2,4,6,8,10};

    // v.push_back(20);
    // v.push_back(30);
    // v.pop_back();
    // v.push_front(20);
    // v.push_front(30);
    // v.pop_front();
    v.insert(20);
    v.insert(30);

    //vector <int>::iterator itr; //itr pointer
    //list <int>::iterator itr; //itr pointer
    //forward_list <int>::iterator itr; //itr pointer
    set <int>::iterator itr; //itr pointer
    cout<<"using iterator"<<endl;
    for(itr = v.begin();itr!=v.end();itr++)
        cout<<*itr<<endl; //bazei thn timh
        //cout<<++*itr<<endl; //auksanei thn timh kata 1
        //sthn set den mporw na allaksw tis times

        //oi times allazoun monima

    cout<<"using for each loop"<<endl;
    for (int x:v)
        cout<<x<<endl;

};