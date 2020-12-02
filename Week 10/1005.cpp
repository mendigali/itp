#include <iostream>
#include <algorithm>
using namespace std;
struct Luggage {
	char* description;
	int count;
	double weight;
};
struct Passenger {
	int luggageSize;
	char* name;
	Luggage* luggage;
};
Luggage* getLuggage(int& m) {
    Luggage* luggage = new Luggage[m];
    for (int i = 0; i < m; i++) {
        char* description = new char[1001];
        int count;
        double weight;
        cin >> description >> count >> weight;
        luggage[i] = {description, count, weight};
    }
    return luggage;
}
bool compLugg(Luggage a, Luggage b) {
    return a.weight > b.weight;
}
int main() {
    int n, mx = -999, pos;
    cin >> n;
    Passenger* passenger = new Passenger[n];
    for (int i = 0; i < n; i++) {
        char* name = new char[1001];
        int m;
        cin >> name >> m;
        Luggage* luggage = new Luggage;
        luggage = getLuggage(m);
        sort(luggage, luggage+m, compLugg);
        passenger[i] = {m, name, luggage};
        if (passenger[i].luggage[0].weight > mx) {
            mx = passenger[i].luggage[0].weight;
            pos = i;
        }
    }
    cout << passenger[pos].name << endl;
    cout << passenger[pos].luggage[0].description;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < passenger[i].luggageSize; j++) {
            delete[] passenger[i].luggage[j].description;
        }
        delete[] passenger[i].luggage;
        delete[] passenger[i].name;
    }
    delete[] passenger;
    return 0;
}