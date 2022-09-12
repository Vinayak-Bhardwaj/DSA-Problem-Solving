#include<bits/stdc++.h>
using namespace std;

int friends(int n) {
    // BASE CASE
    if(n == 0) {
        return 1;
    }
    if(n == 1 || n == 2) {
        return n;
    }
    // RECURSIVE CASE
    int ans = (1*friends(n-1) + (n-1)*friends(n-2));
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << friends(n);
    return 0;
}