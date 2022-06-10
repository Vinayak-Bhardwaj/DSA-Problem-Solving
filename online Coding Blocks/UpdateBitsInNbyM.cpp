#include<bits/stdc++.h>
using namespace std;

void updateBits(int &n, int m, int i, int j) {
    // Step1. clear bits from i to j in N
    int ma = 0;
    ma = (~ma);
    ma = ma << j;
    int mb = (1 << (i-1)) - 1;
    int finalMask = ma | mb;
    n = n & finalMask;
    cout << n << endl;

    // Step2. modify m
    m = m << (i-1);
    //cout << m << endl;

    // Step3. do or of M and N
    n = (n | m);
    //cout << n << endl;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << n << endl;
    updateBits(n, m, 2, 5);
    cout << n << endl;
    return 0;
}