#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {5, 4, 7, 8, 10};
    int n = sizeof(arr) / sizeof(int);
    
    // 1. FIND FUNCTION
    int key;
    cin >> key;
    int* p = find(arr, arr + n, key);
    int index = p - arr;
    if(index == n) {
        cout << "The Key Element is not found in the arr";
    }
    else {
        cout << "The key element is found in the arr at index: " << index;
    }
    return 0;
}