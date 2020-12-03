#include <iostream>
using namespace std;

int sumArray(int* a, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}

unsigned int getRowIndWithMaxSum(int** a, int n, int m) {
	int max = -1000000;
	unsigned maxInd = 0;
	for (int i = 0; i < n; i++) {
		int sum = sumArray(a[i], m);
		if (max < sum) {
			max = sum;
			maxInd = i;
		}
	}
	return maxInd;
}

void inputArray(int* a, int n) {
	for (int* it = a; it != a + n; it++) {
		cin >> *it;
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	int** arr = new int* [n]; // [&arr0][&arr1][&arr2][&arr3]..[&(arrn-1)]
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
	}

	for (int i = 0; i < n; i++) {
		inputArray(arr[i], m);
	}

	cout << getRowIndWithMaxSum(arr, n, m) + 1 << endl;


	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}

	delete[] arr;
	return 0;
}