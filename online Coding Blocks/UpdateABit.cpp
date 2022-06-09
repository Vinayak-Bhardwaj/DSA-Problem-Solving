#include<bits/stdc++.h>
using namespace std;

void clearBit(int &n, int pos) {
    int mask = (1 << pos);
    mask = (~mask);
    n = n & mask;
}

void update(int &n, int updateBit, int pos) {
    int mask = updateBit << pos;
    //mask = (~mask);
    n = n | mask;
}

int main() {
    int n, pos, updateBit = 1;
    cin >> n >> pos;
    cout << n << endl;
    clearBit(n, pos);
    cout << n << endl;
    update(n, updateBit, pos);
    cout << n << endl;
    return 0;
}