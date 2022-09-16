#include<bits/stdc++.h>
using namespace std;

int nstairs(int n, int k) {
    // BASE CASE
    if(n < 0) {
        return 0;
    }
    if(n == 0) {
        return 1;
    }
    // RECURSIVE CASE
    int ans = 0;
    for(int i = 1; i <= k; i++) {
        ans = ans + nstairs(n-i, k);
    }

    return ans;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << nstairs(n, k);
    return 0;
}