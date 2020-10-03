// library for cin and cout
#include <iostream>
// std::
using namespace std;
// initialize array of boolean filled with zeros
// this array will store dead and alive people
// false is alive
// true is dead
bool people[500];
// initialize main function
int main() {
    // initialize 2 integer variables
    int n, k;
    // input 2 variables
    cin >> n >> k;
    // alive - number of people who are alive
    // cnt - it will be counter to kill
    int alive = n, cnt = 0;
    // start loop until alive is greater than 1
    while (alive > 1) {
        // start loop for each people
        for (int i = 1; i <= n; i++) {
            // if people is false, it means
            // that he is alive
            // and we will increase counter
            if (people[i] == false) {
                cnt++;
                // when counter gets equal to k
                // kill one person
                if (cnt == k) {
                    people[i] = true;
                    // refresh counter
                    cnt = 0;
                    // and decrease number of alive
                    alive--;
                    // when it will be only 1 alive person
                    // finish loop
                    if (alive == 1) {
                        break;
                    }
                }
            }
        }
    }
    // start loop for each people
    for (int i = 1; i <= n; i++) {
        // find last last alive person 
        // and output his index
        if (people[i] == false) {
            cout << i;
            return 0;
        }
    }
}