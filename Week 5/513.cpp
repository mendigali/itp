// library for cin and cout
#include <iostream>
// library for strcmp
#include <cstring>
// std::
using namespace std;
// initialize main function
int main() {
    // initialize char array on 5 records
    // each consist of 2 elements 
    // and fill it with given information
    char arr[5][10][10] = {
        {"Tom", "555-3322"},
        {"Mary", "555-8976"},
        {"Jon", "555-1037"},
        {"Rachel", "555-1400"},
        {"Sherry", "555-8873"}
    };
    // initialize char array
    char name[10];
    // input name
    cin >> name;
    // start loop for each element in char array
    for (int i = 0; i < 5; i++) {
        // compare given name with each name in 
        // array and output number if name is found
        if (strcmp(name, arr[i][0]) == 0) {
            cout << arr[i][1];
            // stop executing main function if name was found
            return 0;
        }
    }
    // output not found if name 
    // was not found
    cout << "Not found";
    // end of the main function
    return 0;
}