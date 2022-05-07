#include<bits/stdc++.h>
using namespace std;
#define lli long long int

lli BinarySearch(lli *arr, lli n, lli key) {
    lli start = 0, end = n - 1, mid;
    while(start <= end) {
        mid = (start + end)/2;
        if(arr[mid] == key) {
            return mid;
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    lli n, arr[100000], key;
    cin >> n;
    for(lli i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> key;
    cout << BinarySearch(arr, n, key);
    return 0;
}