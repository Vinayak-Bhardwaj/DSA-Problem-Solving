#include<bits/stdc++.h>
using namespace std;

void printArr(int* arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int* arr, int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; i < n - j - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bubbleSortRecursion(int* arr, int n, int i) {
    // BASE CASE
    if(i == n-1) {
        return;
    }
    // RECURSIVE CASE
    for(int j = 0; j < n - i - 1; j++) {
        if(arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
        }
    }
    bubbleSortRecursion(arr, n, i + 1);
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    printArr(arr, n);
    //bubbleSort(arr, n);
    bubbleSortRecursion(arr, n, 0);
    printArr(arr, n);
    return 0;
}