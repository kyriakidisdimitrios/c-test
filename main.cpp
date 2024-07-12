#include <cstdarg>
#include <iostream>
#include <memory>

using namespace std;
class account {
    string firstName;
    string lastName;
    int balance;
public:
    account(string f, string l, int b) {
        firstName =f;
        lastName = l;
        balance = b;
    }
    int getBalance() {
        return balance;
    }
    int deposit(int d) {
        balance =
    }
};
int main() {
    int choice;
    cout<<"Select one option below"<<endl;
    cout<<"1. Open an account"<<endl;
    cout<<"2. Balance enquiry"<<endl;
    cout<<"3. Deposit"<<endl;
    cout<<"4. Withdrawal"<<endl;
    cout<<"5. Close an account"<<endl;
    cout<<"6. Show all accounts"<<endl;
    cout<<"7. Quit"<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>choice;
    cout<<"choice is "<<choice;


}