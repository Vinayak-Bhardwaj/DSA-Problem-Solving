#include<bits/stdc++.h>
using namespace std;

void clearBit(int &num, int bits) {
    int mask = 0;
    mask = (~mask);
    mask = mask << bits;
    num = num & mask;
}

void clearBitsij(int &num, int i, int j) {
    int maskA = 0;
    maskA = (~maskA);
    maskA = maskA << j;
    //int maskB = pow(2, i) - 1;
    int maskB = (1 << i) - 1;
    int finalMask = maskA | maskB;

    num = num & finalMask;
}

int main() {
    int num, bits;
    //cin >> num >> bits;
    cin >> num;
    cout << num << endl;
    // clearBit(num, bits);
    // cout << num;
    clearBitsij(num, 2, 4);
    cout << num;
    return 0;
}