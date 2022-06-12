#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while(n > 0) {
        if((n&1) == 1) {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main() {
    int Q;
    cin >> Q;
    while(Q--) {
        int a, b, sum = 0;
        cin >> a >> b;
        for(int i = a; i <= b; i++) {
            sum += countSetBits(i);
        }
        cout << sum << endl;
    }
    return 0;
}