#include<bits/stdc++.h>
using namespace std;

void printNum(int n) {
    // BASE CASE
    if(n == 0) {
        return;
    }
    // RECURSIVE CASE
    printNum(n - 1);
    cout << n << endl;
}

int main() {
    int n;
    cin >> n;
    printNum(n);
    return 0;
}