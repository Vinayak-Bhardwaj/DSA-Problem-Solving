#include<bits/stdc++.h>
using namespace std;

int pairing(int n) {
    // BASE CASE
    if(n == 0 || n == 1) {
        return 1;
    }
    // RECURSIVE CASE
    int res = pairing(n - 1) + (n - 1)*pairing(n - 2);
    return res;
}

int main() {
    int n;
    cin >> n;
    
    cout << pairing(n);

    return 0;
}