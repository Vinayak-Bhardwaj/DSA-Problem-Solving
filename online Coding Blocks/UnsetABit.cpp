#include<bits/stdc++.h>
using namespace std;

void clearBit(int &n, int pos) {
    int mask = (1 << pos);
    mask = (~mask);
    n = n & mask;
}

int main() {
    int n, pos;
    cin >> n >> pos;
    cout << n << endl;
    clearBit(n ,pos);
    cout << n;
    return 0;
}