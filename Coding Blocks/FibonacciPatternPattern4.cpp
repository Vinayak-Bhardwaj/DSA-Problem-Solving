#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a = 1, b = 1, c = 1;
    cin >> n;
    if(n > 0) {
        cout << "0" << endl; 
        if(n > 1) {
            cout << "1" << "\t" << "1" << endl;
            for(int i = 3; i <= n; i++) {
                for(int j = 1; j <= i; j++) {
                    c = a + b;
                    a = b;
                    b = c;
                    cout << c << "\t";
                }
                cout << endl;
            }
        }
    }
    return 0;
}