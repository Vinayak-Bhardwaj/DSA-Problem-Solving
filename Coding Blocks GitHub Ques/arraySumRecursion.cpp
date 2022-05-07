#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int arrSum1(int *arr, int n) {
    // BASE CASE
    if(n == 1) {
        return arr[0];
    }
    //RECURSIVE CASE
    int ans = arr[0] + arrSum1(arr + 1, n - 1);
    return ans;
}

int arrSum1Modified(int *arr, int n) {
    // BASE CASE
    if(n == 0) {
        return 0;
    }
    //RECURSIVE CASE
    int ans = arr[0] + arrSum1(arr + 1, n - 1);
    return ans;
}

int arrSum2(int *arr, int n, int i) {
    //BASE CASE
    if(i == n - 1) {
        return arr[i];
    }
    //RECURSIVE CASE
    int ans = arr[i] + arrSum2(arr, n, i + 1);
    return ans;
}

int arrSum2Modified(int *arr, int n, int i) {
    //BASE CASE
    if(i == n) {
        return 0;
    }
    //RECURSIVE CASE
    int ans = arr[i] + arrSum2(arr, n, i + 1);
    return ans;
}

int arrSum3(int *arr, int n) {
    //BASE CASE
    if(n == 0) {
        return 0;
    }
    //RECURSIVE CASE
    int ans = arr[n - 1] + arrSum3(arr, n-1);
    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr1[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = sizeof(arr) / sizeof(int);
    int m = sizeof(arr1) / sizeof(int);
    cout << arrSum1(arr, n) << endl;
    cout << arrSum2(arr, n, 0) << endl;
    cout << arrSum3(arr, n) << endl;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int arrSum1(int *arr, int n) {
//     // BASE CASE
//     if(n == 0) {
//         return 0;
//     }
//     // RECURSIVE CASE
//     int sum = 0;
//     sum = arr[0] + arrSum1(arr + 1, n - 1);
//     return sum;
// }

// int arrSum2(int *arr, int n, int i) {
//     // BASE CASE
//     if(i == n) {
//         return 0;
//     }
//     // RECURSIVE CASE
//     int sum = 0;
//     sum = arr[i] + arrSum2(arr, n, i + 1);
//     return sum;
// }

// int arrSum3(int *arr, int n) {
//     // BASE CASE
//     if(n == 0) {
//         return 0;
//     }
//     // RECURSIVE CASE
//     int sum = 0;
//     sum = arr[n - 1] + arrSum3(arr, n - 1);
//     return sum;
// }



// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int arr1[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//     int n = sizeof(arr) / sizeof(int);
//     int m = sizeof(arr1) / sizeof(int);
//     cout << arrSum1(arr, n) << endl;
//     cout << arrSum2(arr, n, 0) << endl;
//     cout << arrSum3(arr, n) << endl;
//     return 0;
// }