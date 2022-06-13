#include<bits/stdc++.h>
using namespace std;

bool isArraySorted1(int* arr, int n) {
    // BASE CASE
    if(n == 1 || n == 0) {
        return true;
    }
    // RECURSIVE CASE
    bool condition1;
    bool condition2;

    if(arr[0] < arr[1]) {
        condition1 = true;
    }
    if(isArraySorted1(arr + 1, n - 1)) {
        condition2 = true;
    }

    if(condition1 && condition2) {
        return true;
    }
    return false;
}

bool isArraySorted2(int *arr, int i, int n) {
    // BASE CASE
    if(i == n - 1 || i == n) {
        return true;
    }
    // RECURSIVE CASE
    bool condition1 = false;
    bool condition2 = false;
    
    if(arr[i] < arr[i + 1]) {
        condition1 = true;
    }
    if(isArraySorted2(arr, i + 1, n)) {
        condition2 = true;
    }

    if(condition1 && condition2) {
        return true;
    }
    return false;

}

int main() {
    //int a[] = {1, 2, 3, 4, 5, 6, 7, 9, 8};
    int a[] = {1};
    int n = sizeof(a) / sizeof(int);
    if(isArraySorted2(a, 0, n)) {
        cout << "Sorted";
    }
    else {
        cout << "Not Sorted";
    }
    return 0;
}