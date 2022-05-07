#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
    lli n1, n2, counter = 0;
    cin >> n1 >> n2;
    for(lli i = 1; counter != n1; i++) {
        if((3*i + 2) % n2 != 0) {
            cout << (3*i + 2) << endl;
            counter++;
        }
    }
    return 0;
}