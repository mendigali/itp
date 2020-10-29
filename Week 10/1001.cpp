#include <iostream>
#include <cstring>
int counter;
using namespace std;
struct train{
    int id;
    char location[1000];
    char time[1000];
};
void uppercase(char *s) {
    int i = 0;
    while (*(s + i) != '\0') {
        *(s + i) = toupper(*(s + i));
        i++;
    }
}
bool isEqual(char *s1, char *s2) {
    int size1 = strlen(s1);
    int size2 = strlen(s2);
    if (size1 != size2) {
        return false;
    }
    int i = 0;
    for (i = 0; i < size1; i++) {
        if (*(s1 + i) != *(s2 + i)) {
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    char str[1001];
    cin >> n;
    int index=-15;
    struct train *a = new train[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].id >> a[i].location >> a[i].time;
    }
    cin >> str;
    for(int i = 0; i < n; i++){
        uppercase(str);
        uppercase(a[i].location);
        if(isEqual(str, a[i].location)){
            counter++;
            index = i;
        }
    }
    if(counter > 0){
        cout << a[index].id << "_" << a[index].location << "_" << a[index].time;
    }
    else{
        cout << "Impossible";
    }
}