#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--) {
        int x1, x2, y1, y2, diff;
        cin >> x1 >> y1 >> x2 >> y2;
        diff = abs(x1 - y1) + abs(x2 - y2);
        if((abs(x1 - y1) == 1 && x2 == y2) || (abs(x2 - y2) == 1 && x1 == y1)) {
            cout << "No" << endl;
            continue;
        }
        if(diff & 1) {
            cout << "No" << endl;
        }
        else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}