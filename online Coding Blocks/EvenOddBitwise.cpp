#include<bits/stdc++.h>
using namespace std;

void isEven(int n) {
    int lsb = (n & 1);
    (lsb == 0) ? cout << "Even Number" : cout << "Odd Number";
    cout << endl;
}

bool checkBit(int n, int pos) {
    int mask = 1 << pos;
    int res = n & mask;
    return (res == 0) ? 0 : 1;
}

int main() {
    int n;
    cin >> n;
    isEven(n);
    if(checkBit(n, 2)) {
        cout << "Bit is 1";
    }
    else {
        cout << "Bit is 0";
    }
    return 0;
}