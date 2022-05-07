#include<bits/stdc++.h>
using namespace std;
#define lli long long int

bool isInverse(lli* arr1, lli* arr2, lli n) {
    for(lli i = 0; i < n; i++) {
        if(arr2[arr1[i]] != i)
            return false;
    }
    return true;
}

int main() {
    lli n, arr1[100000], arr2[100000];
    cin >> n;
    for(lli i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for(lli i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    cout << (isInverse(arr1, arr2, n) == 1 ? "true" : "false");
    return 0;
}