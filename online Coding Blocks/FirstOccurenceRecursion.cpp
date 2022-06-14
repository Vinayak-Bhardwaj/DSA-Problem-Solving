#include<bits/stdc++.h>
using namespace std;

int firstOccurence(int* arr, int n, int i, int key) {
    // BASE CASE
    if(arr[i] == key) {
        return i;
    }
    if(i == n) {
        return -1;
    }
    // RECURSIVE CASE
    return firstOccurence(arr, n, i + 1, key);
}

int firstOcc2(int *arr, int n, int key) {
    // BASE CASE
    if(n == 0) {
        return -1;
    }
    if(arr[0] == key) {
        return 0;
    }
    // RECURSIVE CASE
    int i = firstOcc2(arr + 1, n - 1, key);
    if(i == -1) {
        return -1;
    }
    // Everytime 0 gets returned then it comes down the stack by doing +1 everytime to the answer thus resulting into the actual index
    // that's why there is a check of -1, that if returning index is of -1, so there is no point of adding +1 to it, we just have to return -1 only
    return i + 1;
}

int main() {
    int arr[] = {2, 3, 4, 2, 3, 6};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;

    cout << firstOccurence(arr, n, 0, key) << endl;
    cout << firstOcc2(arr, n, key) << endl;

    return 0;
}