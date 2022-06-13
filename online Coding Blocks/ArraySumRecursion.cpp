#include<bits/stdc++.h>
using namespace std;

int arrSum1(int* arr, int n) {
    // BASE CASE
    if(n == 0) {
        return 0;
    }
    // RECURSIVE CASE
    int sum = 0;
    sum = arr[0] + arrSum1(arr + 1, n - 1);
    return sum;
}

int arrSum2(int* arr, int i, int n) {
    // BASE CASE
    if(i == n){
        return 0;
    }
    // RECURSIVE CASE
    int sum = 0;
    sum = arr[i] + arrSum2(arr, i + 1, n);
    return sum;
}

int arrSum3(int* arr, int n) {
    // BASE CASE
    if(n == 0) {
        return 0;
    }
    // RECURSIVE CASE
    int sum = 0;
    sum = arr[n - 1] + arrSum3(arr, n - 1);
    return sum; 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(int);
    cout << arrSum1(arr, n) << endl;
    cout << arrSum2(arr, 0, n) << endl;
    cout << arrSum3(arr, n) << endl;
    return 0;
}