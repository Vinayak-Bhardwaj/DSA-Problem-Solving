#include<bits/stdc++.h>
using namespace std;

int search(int* arr, int n, int key) {
    int start = 0;
    int end = n - 1;
    while(start <= end) {
        int mid = (start + end) / 2;
        
        if(arr[mid] == key) {
            return mid;
        }
        
        else if(arr[start] <= arr[mid]) {           // i.e exist in 1st half of the array
            if(key >= arr[start] && key <= arr[mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        else {
            if(key >= arr[mid] && key <= arr[end]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    int n, key;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> key;

    cout << search(arr, n, key);

    return 0;
}