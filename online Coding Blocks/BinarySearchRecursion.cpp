#include<bits/stdc++.h>
using namespace std;

int binarySearch(int* arr, int start, int end, int key) {
    // BASE CASE
    if(start > end) {
        return -1;
    }
    // RECURSIVE CASE
    int mid = (start + end) / 2;
    if(arr[mid] == key) {
        return mid;
    }
    else if(key > arr[mid]) {
        return binarySearch(arr, mid + 1, end, key);
    }
    else {
        return binarySearch(arr, start, mid - 1, key);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(int);

    int key;
    cin >> key;
    
    cout << binarySearch(arr, 0, n - 1, key);

    return 0;
}