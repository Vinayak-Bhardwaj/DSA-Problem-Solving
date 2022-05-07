#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m, res = 1;
    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        res = res * n;
    }
    cout << res;
    return 0;
}