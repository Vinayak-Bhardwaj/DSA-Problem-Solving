#include<bits/stdc++.h>
using namespace std;

void printAllOccurence(int* arr, int n, int i,int key) {
    // BASE CASE
    if(i == n) {
        return;
    }
    // RECURSIVE CASE
    if(arr[i] == key) {
        cout << i << " ";
    }
    printAllOccurence(arr, n, i + 1, key);
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    
    int key;
    cin >> key;
    
    printAllOccurence(arr, n, 0, key);

    return 0;
}