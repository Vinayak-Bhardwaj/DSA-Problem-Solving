#include<bits/stdc++.h>
using namespace std;

int sum1(int* arr, int n) {
    // BASE CASE
    if(n == 0) {
        return 0;
    }
    // RECURSIVE CASE
    int sum = arr[0] + sum1(arr + 1, n - 1);
    return sum;
}

int sum2(int* arr, int i, int n) {
    // BASE CASE
    if(i == n) {
        return 0;
    }
    // RECURSIVE CASE
    int sum = arr[i] + sum2(arr, i + 1, n);
    return sum;
}

int sum3(int* arr, int n) {
    // BASE CASE
    if(n == 0)
        return 0;
    // RECURSIVE CASE
    int sum = arr[n-1] + sum3(arr, n-1);
    return sum;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, -200};
    int n = sizeof(arr) / sizeof(int);

    cout << sum1(arr, n) << endl;
    cout << sum2(arr, 0, n) << endl;
    cout << sum3(arr, n) << endl;

    return 0;
}