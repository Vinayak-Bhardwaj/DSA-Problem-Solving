#include<bits/stdc++.h>
using namespace std;

int trailingZeroes(int n) {
    int sum = 0, d = 5;
    while(n/d != 0) {
        sum = sum + (n/d);
        d = d*d;
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    cout << trailingZeroes(n);

    return 0;
}