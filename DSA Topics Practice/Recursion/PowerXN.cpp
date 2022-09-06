#include<bits/stdc++.h>
using namespace std;

int power(int x, int n) {
    // BASE CASE
    if(n == 0) {
        return 1;
    }
    // RECURSIVE CASE
    int ans = x * power(x, n-1);
    return ans;
}

int main() {
    int x, n;
    cin >> x >> n;
    cout << power(x, n);
    return 0;
}