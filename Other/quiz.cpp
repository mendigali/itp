#include <iostream> // cin and cout
using namespace std; // std::
int main() { // main function
    int month; // initialize an integer variable
    cin >> month; // input an integer
    // using nested ternary operator because my barcode is even number (0)
    // compare month variable with each number from 1 to 12
    // month variable is not between 1 and 12, then output Error
    cout <<((month == 1) ? "January" : 
            (month == 2) ? "February" :
            (month == 3) ? "March" : 
            (month == 4) ? "April" :
            (month == 5) ? "May" :
            (month == 6) ? "June" :
            (month == 7) ? "July" :
            (month == 8) ? "August" :
            (month == 9) ? "September" :
            (month == 10) ? "October" :
            (month == 11) ? "November" :
            (month == 12) ? "December" : "Error");
    return 0; // end of the main function
}