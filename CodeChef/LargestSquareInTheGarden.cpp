#include<bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cin >> testCase;

    while(testCase--) {
        int a, b;
        cin >> a >> b;

        if(b >= a) {
            cout << 0 << endl;
        }

        else {
            int diff = a - b;
            
            if(diff % 4 == 0) {
                cout << diff/4 << endl;
            }

            else {
                cout << diff/4 + 1 << endl;
            }
        }
    }
    return 0;
}