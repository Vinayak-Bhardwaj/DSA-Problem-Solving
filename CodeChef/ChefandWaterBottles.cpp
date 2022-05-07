#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli T;
    cin >> T;
    while(T--) {
        lli n, x, k, sum = 0;
        cin >> n >> x >> k;
        if(x > k) {
            cout << "0" << endl;
        }
        else {
            lli fullBottles = k / x;
            lli answer = (fullBottles > n) ? n : fullBottles;
            cout << answer << endl;
        }
    }
    return 0;
}