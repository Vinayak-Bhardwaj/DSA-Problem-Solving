#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, arr1[100000], arr2[100000];
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for(int i = 0; i < n; i++) {
        arr2[arr1[i]] = i;
    }

    for(int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}