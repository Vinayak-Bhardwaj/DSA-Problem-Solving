#include<bits/stdc++.h>
using namespace std;

int NStairs(int n, int k) {
    // BASE CASE
    if(n == 0) {
        return 1;
    }
    if(n < 0) {
        return 0;
    }
    // RECURSIVE CASE
    int sum = 0;
    for(int i = 1; i <= k; i++) {
        sum = sum + NStairs(n - i, k);
    }
    return sum;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << NStairs(n, k);
    return 0;
}