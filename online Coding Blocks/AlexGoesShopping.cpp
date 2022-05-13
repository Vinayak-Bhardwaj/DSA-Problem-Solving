#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli n;
    cin >> n;
    lli arr[n];
    for(lli i = 0; i < n; i++) {
        cin >> arr[i];
    }
    lli q;
    cin >> q;
    while(q--) {
        lli A, k, possible = 0;
        cin >> A >> k;
        for(lli i = 0; i < n; i++) {
            if(A % arr[i] == 0) {
                possible++;
            }
        }
        (possible == k) ? cout << "Yes" : cout << "No";
        cout << endl;
    }
    return 0;
}