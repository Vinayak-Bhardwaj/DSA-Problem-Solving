#include<bits/stdc++.h>
using namespace std;
#define lli long long int

lli LCM(lli a, lli b) {
    lli bigger = (a > b) ? a : b;
    lli smaller = (a < b) ? a : b;
    lli pro = 1;
    for(lli i = 1; true; i++) {
        pro = bigger * i;
        if(pro % smaller == 0) {
            return pro;
        }
    }
}

int main() {
    lli n1, n2;
    cin >> n1 >> n2;
    cout << LCM(n1, n2);
    return 0;
}