#include<bits/stdc++.h>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    int ans = (x ^ y);

    // Calculate MSB of the Answer
    int bit = 0;
    while(ans > 0) {
        ans = ans >> 1;
        bit++;
    }

    cout << (1 << bit) - 1;

    return 0;
}