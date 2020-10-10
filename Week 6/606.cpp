#include <iostream>
using namespace std;
// initialize function which takes array size
// and turns which of them has more positive numbers
string compare(int n) {
    int arr1[100], arr2[100];
    // pos1 - number of positives in first array
    // pos2 - number of positives in second array
    int pos1 = 0, pos2 = 0;
    // get first array and count number of positives
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
        if (arr1[i] > 0) pos1++;
    }
    // get second array and count number of positives
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
        if (arr2[i] > 0) pos2++;
    }
    // compare number of positives of 2 arrays
    if (pos1 > pos2)
        return "Number of positives in the first array is greater";
    else if (pos1 < pos2)
        return "Number of positives in the second array is greater";
    else
        return "Numbers are equal";
}
int main() {
    // initialize and input integer variables
    // which will be size of arrays
    int n;
    cin >> n;
    // call function which takes array size and 
    // returns string as a result of comparison 
    // of two arrays 
    cout << compare(n);
    return 0;
}