#include <iostream> // library for cin and cout
#include <vector> // library for vector
using namespace std; // std::
int main() { // initialize main function
    int n; // initialize integer number
    cin >> n; // input number
    // initialize vector array filled with 1 (true)
    // after runnin sieve of eratosthene algorithm
    // this array will have 1 (true) on prime numbers
    // and 0 (false) on non prime numbers
    vector<char> prime (n+1, true);
    // mark 0 and 1 as false, because 
    // these numbers non prime
    prime[0] = prime[1] = false;
    // start loop
    for (int i = 2; i * i <= n; i++){
        // check only numbers which are marked true
        if (prime[i]){
            if (i * i <= n) {
                // mark all multiples of i as false
                // example: i = 3, mark 6, 9, 12, 15... false
                for (int j = i * i; j <= n; j += i) {
                    prime[j] = false;
                }
            } 
        }
    }
    // start loop
    for (int i = 2; i <= n; i++) {
        // output number with mark true
        if (prime[i]) {
            cout << i << ' ';
        }
    }
    return 0; // end of the main function
}