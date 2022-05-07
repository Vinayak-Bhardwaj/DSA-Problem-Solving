#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int *arr, int n) {
    int indexOfMin;
    for(int i = 0; i < n-1; i++) {                  // Loop for the number of passes denoted from 0 because we need opeartions with element with index 0
        indexOfMin = i;                             // assigning first element of NS part of array as minimum element for the future comparisons
        for(int j = i+1; j < n; j++) {              // running loop from i+1 to n-1 to find the smallest element's index and later swapping it
            if(arr[j] < arr[indexOfMin]) {
                indexOfMin = j;
            }
        }
        swap(arr[i], arr[indexOfMin]);              // after swapping we will have smallest at index 0 then second smallest at 1 and so on and that is how we have our array sorted in ascending order
    }
}

int main() {
    int arr[] = {7, 11, 9, 2, 17, 4};
    int arr1[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = sizeof(arr) / sizeof(int);
    int m = sizeof(arr1) / sizeof(int);
    printArray(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}