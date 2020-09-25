// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     for (int i = 0; i<10; i++){
//         cout << i << ' ' << pow(i,2) << endl;
//         // if (i%2 == 0){
//         //     continue;
//         // } else if (i == 9){
//         //     break;
//         // }
//     }                                     
//     return 0;                                            
// }
// 1 line: library for cin and cout
// 2 line: library for pow
// 3 line: for std::
// 4 line: created main function
// 6 line: created for loop which will go from 0 until 10 (not including 10)
// 7 line: output i to the power of 2
// 8 line: check if i is even or not
// 9 line: if condition was true, then continue
// 11 line: if previous condition was false, then check if i is equal to 9
// 12 line: stop loop if previous condition was true
// 13 line: end of the main function
#include <iostream> // library for cin and cout
using namespace std; // std::
int main() { // create main function
    // initialize integer that will be iterator and make it equal to 0
    int i = 0;
    // start loop from 0 until 10 not including
    while (i < 10) {
        // output i to the power of 2
        cout << i * i;
        // when i will be equal to 9 stop the loop
        if (i == 9) break;
        // increase iterator by 1
        i++;
    }
    // end of the main function
    return 0;
}