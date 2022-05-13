#include<bits/stdc++.h>
using namespace std;
#define lli long long int

lli chewBecca(lli n) {
    // BASE CASE
    if(n == 9 || n == 0) {
        return n;
    }
    // RECURSIVE CASE
    lli sum = 0;
    lli dig = n % 10;
    lli newDig = 9 - dig;
    if(newDig < dig) {
        sum = sum + (chewBecca(n / 10) * 10) + newDig;
    }
    else { 
        sum = sum + (chewBecca(n / 10) * 10) + dig;
    }
    return sum;
}

int main() {
    lli n;
    cin >> n;
    cout << chewBecca(n);
    return 0;
}