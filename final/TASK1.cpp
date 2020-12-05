#include <iostream>
#include <algorithm>
using namespace std;
void countArray(int* arr, int& size)
{
    for (int i = 0; i < size; i++)
    {
        int a;
        cin >> a; // get element
        arr[a-1]++; // count number of occurances
    }
}
void printArray(int* arr, int& size)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == 2) // if element occured 2 times
            cout << i+1; // print element +1 because started from zero
}
int main()
{
    int n;
    cin >> n;
    // create dynamic array
    int* arr = new int[n];
    // fill array with zeros
    fill(arr, arr+n, 0);
    /* 
     * call a function which gets elements
     * one by one and counts
     * number of times that each number
     * occured in array
     */
    countArray(arr, n);
    // print element which occured exactly 2 times
    printArray(arr, n);
    // clear memory
    delete[] arr;
    return 0;
}