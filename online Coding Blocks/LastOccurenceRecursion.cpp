#include<bits/stdc++.h>
using namespace std;

int lastOccurence(int* arr, int n, int i, int key) {
    // BASE CASE
    if(i == n) {
        return -1;
    }
    // RECURENCE CASE
    if(arr[i] == key) {
        int checkAhead = lastOccurence(arr, n, i + 1, key);
        if(checkAhead == -1) {
            return i;
        }
    }
    return lastOccurence(arr, n, i + 1, key);
}

int lastOccurence2(int* arr, int n, int i, int key) {
    // BASE CASE
    if(i == n) {
        return -1;
    }
    // RECURSIVE CASE
    if(arr[i] == key) {
        int checkAhead = lastOccurence2(arr, n, i + 1, key);
        if(checkAhead == -1) {
            return i;
        }
        else {
            return checkAhead;
        }
    }
    return lastOccurence2(arr, n, i + 1, key);
}


int main() {
    int arr[] = {1, 3, 2, 4, 1, 6, 1, 4};
    int n = sizeof(arr) / sizeof(int);

    int key;
    cin >> key;
    
    cout << lastOccurence(arr, n, 0, key) << endl;
    cout << lastOccurence2(arr, n, 0, key) << endl;

    return 0;
}