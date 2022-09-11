#include<bits/stdc++.h>
using namespace std;

int placeTiles(int n) {
    // BASE CASE
    if(n <= 3) {
        return 1;
    }
    // RECURSIVR CASE

    return placeTiles(n-1) + placeTiles(n-4);
}

int main() {
    int n;
    cin >> n;
    cout << placeTiles(n);
    return 0;
}