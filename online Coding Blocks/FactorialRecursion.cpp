#include<bits/stdc++.h>
using namespace std;

int fact(int n) {
    // BASE CASE
    if(n == 0) {
        return 1;
    }
    // RECURSIVE CASE
    int ans = n * fact(n - 1);
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}