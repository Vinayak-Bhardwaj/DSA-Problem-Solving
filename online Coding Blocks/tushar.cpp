#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while(test--) {
        int n, k;
        cin >> n >> k;

        int ct = 0;

        // if n is odd
        if(n == 1) {
            cout << "0" << endl;
        }
        else {
            int indexOdd = n / 2;
            int mid = (n / 2) + 1;
            int diff = abs(k - mid);
            int res = n + indexOdd - 1 - diff;
            cout << res << endl;
        }

        //if n is even
        if(n == 2) {
            cout << "1" << endl;
        }
        else {
            int indexEven = n / 2;
            int mid = n / 2;
            int diff = abs(k - mid);
            int res = n + indexEven - 3 - diff;
            cout << res << endl;
        }
    }
    return 0;
}