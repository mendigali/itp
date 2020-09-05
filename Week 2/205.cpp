#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cin >> num1 >> num2;
    if (num1 % num2 == 0) {
        cout << "yes";
    } else {
        cout << "no";
    }
    return 0;
}