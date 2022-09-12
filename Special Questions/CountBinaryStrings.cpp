#include<bits/stdc++.h>
using namespace std;

int countBinaryStrings(int n, int ld) {
    // BASE CASE
    if(n == 0)
        return 0;
    if(n == 1 && ld == 0)
        return 2;
    if(n == 1 && ld == 1) {
        return 1;
    }
    // RECURSIVE CASE
    if(ld == 0) {
        return (countBinaryStrings(n-1, 0) + countBinaryStrings(n-1, 1));
    }
    return countBinaryStrings(n-1, 0);
}

int main() {
    int n;
    cin >> n;
    cout << countBinaryStrings(n, 0);
    return 0;
}