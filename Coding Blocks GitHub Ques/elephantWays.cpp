#include<bits/stdc++.h>
using namespace std;

int elephantWays(int i, int j) {
    // BASE CASE
    if(i == 0 && j == 0) {
        return 1;
    }
    // RECURSIVE CASE
    int sum = 0;
    
    for(int k = 0; k < i; k++) {
        sum += elephantWays(k, j);
    }

    for(int k = 0; k < j; k++) {
        sum += elephantWays(i, k);
    }

    return sum;
}

int main() {
    int i, j;
    cin >> i >> j;
    cout << elephantWays(i - 1, j - 1);
    return 0;
}