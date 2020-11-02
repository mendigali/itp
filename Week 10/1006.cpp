#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int MAX_N = 1e3 + 5;
struct Train {
    int ID;
    char* FromAddress;
    char* ToAddress;
    char* DepartureTime;
};
bool compTrains(Train a, Train b) {
    string s1 = a.ToAddress;
    string s2 = b.ToAddress;
    if(s1 > s2) return 0;
    else return 1;  
}
void caps(char* s) {
    for (int i = 0; *(s + i); i++)
        *(s + i) = toupper(*(s + i));
}
int main() {
    int n;
    cin >> n;
    Train* train = new Train[n];
    for (int i = 0; i < n; i++) {
        int ID;
        char* FromAddress = new char[MAX_N];
        char* ToAddress = new char[MAX_N];
        char* DepartureTime = new char[MAX_N];
        cin >> ID >> FromAddress >> ToAddress >> DepartureTime;
        caps(FromAddress);
        caps(ToAddress);
        train[i] = {ID, FromAddress, ToAddress, DepartureTime};
    }
    sort(train, train+n, compTrains);
    for (int i = 0; i < n; i++) {
        cout << train[i].ID << ' '
             << train[i].FromAddress << ' '
             << train[i].ToAddress << ' '
             << train[i].DepartureTime
             << endl;
        delete[] train[i].FromAddress;
        delete[] train[i].ToAddress;
        delete[] train[i].DepartureTime;
    }
    delete[] train;
    return 0;
}