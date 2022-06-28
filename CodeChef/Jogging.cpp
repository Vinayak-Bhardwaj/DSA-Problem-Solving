#include<bits/stdc++.h>
using namespace std;

int powerTwo(int n) {
    int ans = 1;
    int mod = pow(10, 9) + 7;
    for(int i = 1; i <= n; i++) {
        ans = ans * 2;
        ans = ans % mod;
        ans = ans % mod;
        ans = ans % mod;
    }
    return ans;
}

int main() {
    int test;
    int mod = pow(10, 9) + 7;

    cin >> test;
    while(test--) {
        int n, x, res;
        cin >> n >> x;

        if(n == 1) {
            res = x;
        }
        else {
            res = 2 * x * powerTwo(n - 2);
        }

        res = res % mod;

        cout << res << endl;
    }
    return 0;
}