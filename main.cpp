#include <iostream>
#include <climits>
using namespace std;

    //char x=128; bgazei -128, paei kuklika

enum day {mon=1, tue,wed,thy,fri,sat,sun};
int main() {
    day d;
    d=mon;
    cout<<tue<<endl;

    int min=INT_MIN;
    int A[10]= {-2,-4,-6,-8,-12};
    for (auto x:A) {
        if (x>min)
            min = x; //mallon anapoda ennoei
    }
    cout<<"Maximum number is: ";
    cout<<min<<endl; //fernei 0, giati einai 10thesio kai ta kena einai 0
    cout<<INT_MIN;
    return 0;
}
