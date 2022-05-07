#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a = 0, b = 1, c = a + b;
    cin >> n;
    cout << a << endl;
    while(c <= n) {
        cout << c << endl;
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}