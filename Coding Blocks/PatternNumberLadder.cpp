#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli n, counter = 1;
    cin >> n;
    for(lli i = 1; i <= n; i++) {
        for(lli j = 1; j <= i; j++) {
            cout << counter << "\t";
            counter++;
        }
        cout << endl;
    }
    return 0;
}