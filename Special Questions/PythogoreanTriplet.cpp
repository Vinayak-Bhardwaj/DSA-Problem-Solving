#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    if(n < 3) {
        cout << -1;
    }
    else if(n & 1) {                                    // Number is odd so odd*odd = odd and odd +- 1 = Even and Even/2 is integer only
        cout << (n*n - 1) / 2 << " " << (n*n + 1) / 2;
    }
    else {                                              // Number is Even so even*even/4 = Integer
        cout << ((n*n)/4) - 1 << " " << ((n*n)/4) + 1;
    }

    return 0;
}