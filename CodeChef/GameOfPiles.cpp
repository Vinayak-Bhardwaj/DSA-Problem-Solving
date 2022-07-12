#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli test;
    cin >> test;
    while(test--) {
        lli n, numOfOdds = 0;
        cin >> n;
        lli arr[n];
        bool isOne = false;

        for(lli i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] % 2 != 0) {
                numOfOdds++;
            }
            if(arr[i] == 1) {
                isOne = true;
            }
        }

        if(numOfOdds % 2 != 0 || isOne) {
            cout << "CHEF" << endl;
        }
        else  {
            cout << "CHEFINA" << endl;
        }
    }
    return 0;
}