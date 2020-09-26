#include <iostream> // library for cin and cout
#include <algorithm> // library for sort
using namespace std; // std::
int main() { // initialize main function
    // initialize integer array and variable
    // array will be used to store time in seconds
    int arr[105], n;
    // input variable
    cin >> n;
    // start loop
    for (int i = 0; i < n; i++) {
        // intialize 3 integer variables
        int h, m, s;
        // input variables
        cin >> h >> m >> s;
        // convert hours and minutes into seconds
        // and store it in array
        arr[i] = (h * 3600) + (m * 60) + s;
    }
    // sort array in ascending order
    sort(arr, arr + n);
    // start loop
    for (int i = 0; i < n; i++) {
        // convert seconds back into hours and minutes
        int h = arr[i] / 3600;
        int m = arr[i] % 3600 / 60;
        int s = arr[i] % 3600 % 60;
        // output hours, minutes and seconds
        cout << h << ' ' << m << ' ' << s << '\n';
    }
    return 0; // end of the main function
}