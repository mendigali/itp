#include <iostream>
#include <string>
#include <sstream>
using namespace std;
bool validateIP(char *ip, int size) {
    string num = "";
    int arr[4], c = 0;
    for (int i = 0; i < size; i++) {
        if (*(ip + i) != '.')
            num += *(ip + i);
        else {
            stringstream cur_num(num);
	        cur_num >> arr[c];
            c++;
            num = "";
        }
    }
    stringstream cur_num(num);
	cur_num >> arr[3];
    for (int i = 0; i < 4; i++)
        if (arr[i] < 0 || arr[i] > 255)
            return false;
    return true;
}
int main() {
    string ip;
    cin >> ip;
    cout << validateIP(&ip[0], ip.length());
    return 0;
}