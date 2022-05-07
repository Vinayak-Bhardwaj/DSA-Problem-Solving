#include<bits/stdc++.h>
using namespace std;
#define lli long long int

lli integralPart(lli n) {
    for(lli i = 1; true; i++) {
        if(i*i == n) {
            return i;
        }
        else if(i*i > n) {
            return i-1;
        }
    }
}

int main() {
    lli n;
    cin >> n;
    cout << integralPart(n);
    return 0;
}