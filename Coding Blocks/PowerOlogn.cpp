#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli a, b, pro = 1;
    cin >> a >> b;
    for(lli i = 1; i <= b; i++) {
        pro *= a;
    }
    cout << pro;
    return 0;
}