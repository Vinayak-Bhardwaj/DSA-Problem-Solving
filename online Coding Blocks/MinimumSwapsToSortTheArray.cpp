#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, arr1[1000], arr2[1000], different = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }

    sort(arr1, arr1 + n);

    for(int i = 0; i < n; i++) {
        if(arr1[i] != arr2[i]) {
            different++;
        }
    }

    cout << different / 2;

    return 0;
}