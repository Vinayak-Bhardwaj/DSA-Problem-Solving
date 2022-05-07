#include<bits/stdc++.h>
using namespace std;
#define lli long long int

bool isInverse(lli *arr1, lli *arr2, lli n) {
    for(lli i = 0; i < n; i++) {
        if(arr1[i] != arr2[i])
            return false;
    }
    return true;
}

int main() {
    lli n, arr[100000], arr1[100000];
    cin >> n;
    for(lli i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(lli i = 0; i < n; i++) {
        arr1[arr[i]] = i;
    }
    cout << (isInverse(arr, arr1, n) == 1) ? "true" : "false";
    return 0;
}