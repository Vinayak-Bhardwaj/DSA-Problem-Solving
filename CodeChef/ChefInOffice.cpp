#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while(test--) {
        int x, y, hours;
        cin >> x >> y;
        hours = 4*x + y;
        cout << hours << endl;
    }
    return 0;
}