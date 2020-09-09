#include <iostream> // add standard input/output stream library
using namespace std; // write std:: by default
int main() { // declare main function
    int num1, num2; // declare 2 integer numbers
    cin >> num1 >> num2; // input 2 numbers by user
    cout << num1 % num2; // console output reminder of the division of the first number by the second
    return 0; // end of the main function
}