#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int *arr, int n) {
    for(int i = 0; i < n-1; i++) {              // For the number of passes
        for(int j = 0; j < n-1-i; j++) {        // For the number of comparisons within one pass
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {7, 11, 9, 2, 17, 4};
    int arr1[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
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


// #include<bits/stdc++.h>
// using namespace std;

// void printArray(int *arr, int n) {
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void bubbleSort(int *arr, int n) {
//     for(int i = 0; i < n-1; i++) {
//         for(int j = 0; j < n-i-1; j++) {
//             if(arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }

// int main() {
//     int arr[] = {7, 11, 9, 2, 17, 4};
//     int arr1[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//     int n = sizeof(arr) / sizeof(int);
//     int m = sizeof(arr1) / sizeof(int);
//     printArray(arr, n);
//     bubbleSort(arr, n);
//     printArray(arr, n);
//     return 0;
// }