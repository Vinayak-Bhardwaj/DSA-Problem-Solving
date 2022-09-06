#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, arr[1000];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res = 0;
    for(int i = 0; i < n; i++) {
        res = res ^ arr[i];
    }

    // Finding first bit pos from right in res
    int ct = 0;
    while(res > 0) {
        if((res & 1) == 1) {
            break;
        }
        ct++;
        res = res >> 1;
    }

    int numToDifferentiate = 1 << ct;
    int ans1 = 0, ans2 = 0;
    cout << numToDifferentiate << endl;

    // Creating the 2 grps and doing the xor simultanously
    for(int i = 0; i < n; i++) {
        if((arr[i] & numToDifferentiate) == 0) {
            cout << "First Group " << arr[i] << endl;
            ans1 = ans1 ^ arr[i];
        }
        else {
            cout << "Second Group " << arr[i] << endl;
            ans2 = ans2 ^ arr[i];
        }
    }

    cout << ans1 << " " << ans2;

    return 0;
}