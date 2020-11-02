#include <iostream>
#include <cstring>
#include <climits>
using namespace std;
const int MAX_N = 1005;
// the same struct as 1001
struct train {
    int id;
    char* location;
    char* time;
};
// the same function as 1001
void caps(char* s) {
    for (int i = 0; *(s + i); i++)
        *(s + i) = toupper(*(s + i));
}
// convert time into seconds
int sec(char* time) {
    int res = 0;
    res += (*time-'0') * 600;
    res += (*(time+1)-'0') * 60;
    res += (*(time+3)-'0') * 10;
    res += *(time+4)-'0';
    return res * 60;
}
int main() {
    int n;
    cin >> n;
    // array for trains
    struct train* tr = new train[n];
    // array for seconds
    int tm[MAX_N];
    for (int i = 0; i < n; i++) {
        // get input
        int id;
        char* loc = new char[MAX_N];
        char* time = new char[MAX_N];
        cin >> id >> loc >> time;
        // convert time into seconds
        tm[i] = sec(time);
        // uppercase location
        caps(loc);
        tr[i] = {id, loc, time};
    }
    // destination that we are finding
    char dest[MAX_N];
    // input destination
    cin >> dest;
    // uppercase destination
    caps(dest);
    // pos - position of minimum time
    // mn - minimum time in seconds
    int pos = 0, mn = INT_MAX;
    bool imp = true;
    for (int i = 0; i < n; i++)
        if (strcmp(dest, tr[i].location) == 0) {
            imp = false;
            // find minimum time
            if (tm[i] < mn) {
                mn = tm[i];
                pos = i; // position of minimum
            }
        }
    if (imp)
        cout << "Impossible";
    else // output result train
        cout << tr[pos].id << '_' << tr[pos].location << '_' << tr[pos].time;
    // clear memory
    for (int i = 0; i < n; i++) {
        delete[] tr[i].location;
        delete[] tr[i].time;
    }
    delete[] tr;
    return 0;
}