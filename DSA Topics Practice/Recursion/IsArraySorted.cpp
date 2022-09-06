#include<bits/stdc++.h>
using namespace std;

bool isSorted1(int* arr, int n) {
    // BASE CASE
    if(n == 1) {
        return true;
    }
    // RECURSIVE CASE
    bool req1 = arr[0] < arr[1];
    bool req2 = isSorted1(arr + 1, n - 1);

    if(req1 and req2) {
        return true;
    }

    return false;
}

bool isSorted2(int* arr, int i, int n) {
    // BASE CASE
    if(i == n-1) {
        return true;
    }
    // RECURSIVE CASE
    bool req1 = arr[i] < arr[i+1];
    bool req2 = isSorted2(arr, i+1, n);

    if(req1 and req2)
        return true;

    return false;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(int);

    if(isSorted1(arr, n)) {
        cout << "Sorted" << endl;
    }
    if(isSorted2(arr, 0, n)) {
        cout << "Sorted" << endl;
    }
    else {
        cout << "Unsorted";
    }

    return 0;
}