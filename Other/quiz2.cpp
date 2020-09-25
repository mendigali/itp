#include <iostream> // cin and cout
using namespace std; // std::
int main() { // main function
    // initialize 2 integer variables
    int num_of_month, i = 1;
    double money; // initialize double variable
    // input number of months and amount of money for deposit
    cin >> num_of_month >> money;
    // start while loop from i=1 until given number of month
    while (i <= num_of_month) {
        // increase amount of money on a deposit by 4% each iteration
        money += (money / 100 * 4);
        // increase iterator
        i++;
    }
    // output result
    cout << money;
    // end of the main function
    return 0;
}