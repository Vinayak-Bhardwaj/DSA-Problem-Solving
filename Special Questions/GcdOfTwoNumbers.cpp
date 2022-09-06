#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
    // BASE CASE
    if(a == 0) {
        return b;
    }
    // RECURSIVE CASE
    int res = b % a;
    return GCD(res, a);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b);
    return 0;
}