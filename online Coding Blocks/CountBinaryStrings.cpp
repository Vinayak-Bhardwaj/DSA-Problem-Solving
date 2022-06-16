#include<bits/stdc++.h>
using namespace std;

int countStrings(int n, int ld) {
    // BASE CASE
    if(n == 0) {
        return 0;
    }
    if(n == 1 && ld == 0) {
        return 2;
    }
    if(n == 1 && ld == 1) {
        return 1;
    }
    // RECURSIVE CASE
    int res = 0;
    if(ld == 0) {
        res = countStrings(n - 1, 1) + countStrings(n - 1, 0);
    }
    else {
        res = countStrings(n - 1, 0);
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    
    cout << countStrings(n, 0);

    return 0;
}