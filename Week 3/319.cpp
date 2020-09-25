// #include <iostream> // library for cin and cout
// #include <cmath> // library for pow
// using namespace std; // std:: by default
// // this function calculates and returns factorial of a number
// // code is almost exact as 311 problem
// long long int factorial(int num) {
//     long long int result = 1;
//     for (int i = 2; i <= num; i++) {
//         result *= i;
//     }
//     return result;
// }
// int main() { // main function
//     double x; // initialize double variable
//     cin >> x; // input number
//     // calculate and output using given formula
//     cout << (x - (pow(x, 3)/factorial(3)) + (pow(x, 5)/factorial(5)) - (pow(x, 7)/factorial(7)) + (pow(x, 9)/factorial(9)) - (pow(x, 11)/factorial(11)) + (pow(x, 13)/factorial(13)));
//     return 0; // end of the main function
// }

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x;
    int fact3 = 6;
    int fact5 = 120;
    int fact7 = 5040;
    int fact9 = 40320;
    long long int fact11 = 39916800;
    long long int fact13 = 6227020800;
    cin >> x;
    cout << (x - (pow(x, 3)/fact3) + (pow(x, 5)/fact5) - (pow(x, 7)/fact7) + (pow(x, 9)/fact9) - (pow(x, 11)/fact11) + (pow(x, 13)/fact13));
    return 0;
}