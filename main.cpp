#include <iostream>
#include <climits>
using namespace std;

//char x=128; bgazei -128, paei kuklika

enum day { mon = 1, tue, wed, thy, fri, sat, sun };

int main() {
    day d;
    d = mon;
    cout << tue << endl;

    int min = INT_MIN;
    int A[10] = {-2, -4, -6, -8, -12};
    for (auto x: A) {
        if (x > min)
            min = x; //mallon anapoda ennoei
    }
    cout << "Maximum number is: ";
    cout << min << endl; //fernei 0, giati einai 10thesio kai ta kena einai 0
    cout << INT_MIN;

    int A1[2][3] = {3, 3, 3, 3, 3, 3};
    int B1[2][3] = {1, 1, 1, 1, 1, 1};
    int C1[2][3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            C1[i][j] = A1[i][j] + B1[i][j];
        }
    }
    cout<<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<C1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
