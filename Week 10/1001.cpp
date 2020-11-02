#include <iostream>
#include <cstring>
using namespace std;
const int MAX_N = 1000;
struct train {
    int id;
    char* location;
    char* time;
};
void caps(char* s) {
    for (int i = 0; *(s + i); i++)
        *(s + i) = toupper(*(s + i));
}
int main() {
    int n;
    cin >> n;
    struct train* tr = new train[n];
    for (int i = 0; i < n; i++) {
        int id;
        char* loc = new char[MAX_N];
        char* time = new char[MAX_N];
        cin >> id >> loc >> time;
        caps(loc);
        tr[i] = {id, loc, time};
    }
    char dest[MAX_N];
    cin >> dest;
    caps(dest);
    bool imp = true;
    for (int i = 0; i < n; i++) {
        if (strcmp(dest, tr[i].location) == 0) {
            cout << tr[i].id << '_' << tr[i].location << '_' << tr[i].time;
            imp = false;
        }
        delete[] tr[i].location;
        delete[] tr[i].time;
    }
    if (imp)
        cout << "Impossible";
    delete[] tr;
    return 0;
}