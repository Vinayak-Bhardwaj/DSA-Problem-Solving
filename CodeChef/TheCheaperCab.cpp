#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli T;
    cin >> T;
    while(T--) {
        lli first, second;
        cin >> first >> second;
        (first <= second) ? cout << "FIRST" : cout << "SECOND";
    }
    return 0;
}