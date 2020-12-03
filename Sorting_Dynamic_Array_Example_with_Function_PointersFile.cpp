#include <iostream>
using namespace std;
/*
	This program prompts a user to input size of an array 
	and 'n' numbers and prints that numbers in a specific order. 
	The user can choose any sorting order.
	@author: Askar Khaimuldin
*/
void inputArray(int*, int);
void outputArray(int*, int);
bool ascending(int, int);
bool descending(int, int);
void bubbleSort(int*, int, bool (*)(int, int));
int promptMenuChoice();

void main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	bool (*compareFunctions[2])(int, int) = { ascending, descending };
	inputArray(a, n);
	int choice = promptMenuChoice();
	bubbleSort(a, n, compareFunctions[choice - 1]);
	outputArray(a, n);
	delete[] a;
}

void inputArray(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void outputArray(int* a, int n) {
	for (int* i = a; i != a + n; i++) {
		cout << *i << ' ';
	}
}

bool ascending(int a, int b) {
	return a > b;
}

bool descending(int a, int b) {
	return a < b;
}

void bubbleSort(int* a, int n, bool (*compare)(int, int)) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if ((*compare)(a[j], a[j + 1])) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}

int promptMenuChoice() {
	cout << "Please, select Sorting Order :" << endl;
	cout << "1. Ascending order" << endl;
	cout << "2. Descending order" << endl;
	int choice;
	cin >> choice;
	if (choice < 1 || choice > 2) exit(1); // finish
	return choice;
}