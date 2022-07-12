#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli test;
    cin >> test;
    while(test--) {
        lli n, x;
        cin >> n >> x;

        lli res = 0;

        if(n > x) {
            lli candies = n - x;
            res = (candies%4 != 0) ? ((candies / 4) + 1) : (candies / 4);
        }

        cout << res << endl;
    }

    return 0;
}