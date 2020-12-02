#include <iostream>
#include <cstring>
using namespace std;
const int MAX_N = 1000;
/**
 * Declare struct train
 */
struct train {
    int id;
    char* location;
    char* time;
};
/**
 * Changes char array into 
 * uppercase
 */
void caps(char* s) {
    for (int i = 0; *(s + i); i++)
        *(s + i) = toupper(*(s + i));
}
int main() {
    // number of trains
    int n;
    cin >> n;
    /**
     * Create array of train
     */
    struct train* tr = new train[n];
    for (int i = 0; i < n; i++) {
        /**
         * Get information about single train
         */
        int id;
        char* loc = new char[MAX_N];
        char* time = new char[MAX_N];
        cin >> id >> loc >> time;
        // Make location in CAPS LOCK
        caps(loc);
        // Store info about train into array
        tr[i] = {id, loc, time};
    }
    // Get final destination
    char dest[MAX_N];
    cin >> dest;
    // Make desctination in CAPS LOCK
    caps(dest);
    /**
     * If this boolean variable is true
     * than it is impossible to go to the
     * destination. Else, it is possible.
     */
    bool imp = true;
    for (int i = 0; i < n; i++) {
        // if desctination is equal to current location
        if (strcmp(dest, tr[i].location) == 0) {
            // print train id, location and departure time
            cout << tr[i].id << '_' << tr[i].location << '_' << tr[i].time;
            // possible
            imp = false;
        }
        // clear memory
        delete[] tr[i].location;
        delete[] tr[i].time;
    }
    if (imp)
        cout << "Impossible";
    // clear memory
    delete[] tr;
    return 0;
}