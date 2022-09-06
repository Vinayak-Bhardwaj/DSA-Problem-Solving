#include<bits/stdc++.h>
using namespace std;

int fabo(int n) {
    // BASE CASE
    if(n == 0 || n == 1) {
        return n;
    }
    // RECURSIVE CASE
    return (fabo(n-1) + fabo(n-2));
}

int main() {
    int n;
    cin >> n;
    cout << fabo(n);
    return 0;
}