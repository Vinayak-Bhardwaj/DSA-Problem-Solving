#include<bits/stdc++.h>
using namespace std;

int powerXN(int x, int n) {
    // BASE CASE
    if(n == 0) {
        return 1;
    }
    // RECURSIVE CASE
    int ans = x * powerXN(x, n - 1);
    return ans;
}

int main() {
    int x, n;
    cin >> x >> n;
    cout << powerXN(x, n);
    return 0;
}