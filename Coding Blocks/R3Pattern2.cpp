#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
    lli n;
    cin >> n;
    for(lli i = 1; i <= n; i++) {
        for(lli j = 1; j <= i; j++) {
            cout << "*" << "\t";
        }
        cout << endl;
    }
    return 0;
}