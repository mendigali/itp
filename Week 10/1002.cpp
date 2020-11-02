#include <iostream>
#include <cstring>
#include <climits>
using namespace std;
const int MAX_N = 1005;
struct train {
    int id;
    char* location;
    char* time;
};
void caps(char* s) {
    for (int i = 0; *(s + i); i++)
        *(s + i) = toupper(*(s + i));
}
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
    struct train* tr = new train[n];
    int tm[MAX_N];
    for (int i = 0; i < n; i++) {
        int id;
        char* loc = new char[MAX_N];
        char* time = new char[MAX_N];
        cin >> id >> loc >> time;
        tm[i] = sec(time);
        caps(loc);
        tr[i] = {id, loc, time};
    }
    char dest[MAX_N];
    cin >> dest;
    caps(dest);
    int pos = 0, mn = INT_MAX;
    bool imp = true;
    for (int i = 0; i < n; i++)
        if (strcmp(dest, tr[i].location) == 0) {
            imp = false;
            if (tm[i] < mn) {
                mn = tm[i];
                pos = i;
            }
        }
    if (imp)
        cout << "Impossible";
    else
        cout << tr[pos].id << '_' << tr[pos].location << '_' << tr[pos].time;
    for (int i = 0; i < n; i++) {
        delete[] tr[i].location;
        delete[] tr[i].time;
    }
    delete[] tr;
    return 0;
}