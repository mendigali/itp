#include <iostream> // library for cin and cout
using namespace std; // std:: by default
int main() { // main function
    int year; // initialize integer
    cin >> year; // input number
    if (year % 4 == 0) { // check if number does or doesn't give reminder when divided by 4. if it does give a reminder then program goes to else on 16 line
        if (year % 100 != 0) { // if number gives reminder when divided by 100, ouput 366
            cout << 366;
        } else { // if doesn't give reminder, go to this statement
            if (year % 400 == 0) { // if number doesn't give reminder when divided by 400 output 366
                cout << 366;
            } else { // otherwise ouput 365
                cout << 365;
            }
        }
    } else { // if statement on 6 line was false ouput 365
        cout << 365;
    }
    return 0; // end of the main function
}