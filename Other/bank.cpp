#include <iostream>
using namespace std;
int main() {
    int balance = 100;
    while (balance > 0) {
        cout << "Bank account: " << balance << endl;
        cout << "Input: ";
        int money;
        cin >> money;
        balance += money;
    }
    cout << "Bank account: " << balance;
    return 0;
}