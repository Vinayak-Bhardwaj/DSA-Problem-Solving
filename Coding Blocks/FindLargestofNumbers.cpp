#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli num, max = INT_MIN;
    for(lli i = 0; i < 3; i++) {
        cin >> num;
        max = num > max ? num : max;
    }
    cout << max;
    return 0;
}