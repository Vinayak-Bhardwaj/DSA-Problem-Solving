#include<bits/stdc++.h>
using namespace std;

void print0ToN(int n) {
    // BASE CASE
    if(n == -1)
        return;
    // RECURSIVE CASE
    print0ToN(n-1);
    cout << n << " ";
}

void printNTo0(int n) {
    // BASE CASE
    if(n == -1)
        return;
    // RECURSIVE CASE
    cout << n << " ";
    printNTo0(n-1);
}

int main() {
    int n;
    cin >> n;
    print0ToN(n);
    cout << endl;
    printNTo0(n);

    return 0;
}