#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int *arr, int n) {
    int isSorted = 0;
    int numberOfPassReq = 0;
    for(int i = 0; i < n-1; i++) {              // For the number of passes
        isSorted = 1;
        numberOfPassReq++;
        for(int j = 0; j < n-1-i; j++) {        // For the number of comparisons within one pass
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isSorted = 0;
            }
        }
        if(isSorted == 1) {
            break;
        }
    }
    cout << "The number of passes required are : " << numberOfPassReq << endl;
}

int main() {
    int arr[] = {7, 11, 9, 2, 17, 4};
    int arr1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(int);
    int m = sizeof(arr1) / sizeof(int);
    // printArray(arr, n);
    // bubbleSort(arr, n);
    // printArray(arr, n);
    printArray(arr1, m);
    bubbleSort(arr1, m);
    printArray(arr1, m);
    return 0;
}