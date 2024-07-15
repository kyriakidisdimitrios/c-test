#include <algorithm>
#include <cstdarg>
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class account {
    string firstName;
    string lastName;
    int balance;

public:
    account(string f, string l, int b) {
        firstName = f;
        lastName = l;
        balance = b;
    }
    string getFullName() const {
        return firstName + " " + lastName;
    }
    int getBalance() const {
        return balance;
    }
    int getWithdrawal(int d) {
        balance -= d;
    }

    void deposit(int d) {
        balance += d;
    }
};

int getChoice() {
    int choice;
    cout << "Select one option below" << endl;
    cout << "1. Open an account" << endl;
    cout << "2. Balance enquiry" << endl;
    cout << "3. Deposit" << endl;
    cout << "4. Withdrawal" << endl;
    cout << "5. Close an account" << endl;
    cout << "6. Show all accounts" << endl;
    cout << "7. Quit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Choice is " << choice << endl;
    return choice;
}
void closeAllAccounts(vector<account>& accounts) {
    accounts.clear();
    cout << "All accounts have been closed." << endl;
}

int main() {
    string firstName, lastName;
    int balance;
    vector<account> accounts;

    int choice;
    do {
        choice = getChoice();

        switch (choice) {
            case 1: {
                cout << "First name: ";
                cin >> firstName;
                cout << "Last name: ";
                cin >> lastName;
                cout << "Balance: ";
                cin >> balance;

                account ac(firstName, lastName, balance);
                accounts.push_back(ac);
                cout << "Account opened successfully!" << endl;
                break;
            }
            case 2: {
                for (const auto& account : accounts) {
                    cout << account.getFullName() << ": " << account.getBalance() << endl;
                }
                break;
            }
            case 3: {
                cout << "Enter first name: ";
                cin >> firstName;
                cout << "Enter last name: ";
                cin >> lastName;
                int depositAmount;
                cout << "Enter deposit amount: ";
                cin >> depositAmount;
                for (auto& account : accounts) {
                    if (account.getFullName() == firstName + " " + lastName) {
                        account.deposit(depositAmount);
                        cout << "New balance: " << account.getBalance() << endl;
                        break;
                    }
                }
                break;
            }
            case 4: {
                cout << "Enter first name: ";
                cin >> firstName;
                cout << "Enter last name: ";
                cin >> lastName;
                int depositAmount;
                cout << "Enter withdrawal amount: ";
                cin >> depositAmount;
                for (auto& account : accounts) {
                    if (account.getFullName() == firstName + " " + lastName) {
                        account.getWithdrawal(depositAmount);
                        cout << "New balance: " << account.getBalance() << endl;
                        break;
                    }
                }
                break;
            }
            case 5: {
                cout << "Enter first name: ";
                cin >> firstName;
                cout << "Enter last name: ";
                cin >> lastName;
                auto it = remove_if(accounts.begin(), accounts.end(), [&](const account& acc) {
                    return acc.getFullName() == firstName + " " + lastName;
                });
                if (it != accounts.end()) {
                    accounts.erase(it, accounts.end());
                    cout << "Account closed successfully!" << endl;
                } else {
                    cout << "Account not found!" << endl;
                }
                break;
            }
            case 6:
                closeAllAccounts(accounts);
                break;
            case 7:
                cout << "Quitting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 7);

    return 0;
}
