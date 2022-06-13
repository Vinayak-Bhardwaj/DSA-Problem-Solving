#include<bits/stdc++.h>
using namespace std;

bool isArraySorted(int* arr, int n) {
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
    if(isArraySorted(arr + 1, n - 1)) {
        condition2 = true;
    }
    
    if(condition1 && condition2) {
        return true;
    }
    return false;
}

int main() {
    //int a[] = {1, 2, 3, 4, 5, 6, 7, 9, 8};
    int a[] = {};
    int n = sizeof(a) / sizeof(int);
    if(isArraySorted(a, n)) {
        cout << "Sorted";
    }
    else {
        cout << "Not Sorted";
    }
    return 0;
}