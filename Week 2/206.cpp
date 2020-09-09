#include <iostream> // add standard input/output stream library
using namespace std; // write std:: by default
int main() { // declare main function
    int num1, num2; // declare 2 integer numbers
    cin >> num1 >> num2; // input 2 numbers by user
    if (num1 > num2) { // check if the first number is greater than the second
        cout << ">"; // if condition is true console output >
    } else if (num1 < num2) { // if previous condition was false then check if the first number is less than the second
        cout << "<"; // if second condition is true console output <
    } else { // if none of the previous conditions are true then execute statement below
        cout << "="; // console output =
    }
    return 0; // end of the main function
}