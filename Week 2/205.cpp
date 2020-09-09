#include <iostream> // add standard input/output stream library
using namespace std; // write std:: by default
int main() { // declare main function
    int num1, num2; // declare 2 integer numbers
    cin >> num1 >> num2; // input 2 numbers by user
    if (num1 % num2 == 0) { // check if the first number can be divided by the second number without reminder
        cout << "yes"; // if condition is true then console output yes
    } else { // if condition is false execute this statement
        cout << "no"; // console output no
    }
    return 0; // end of the main function
}