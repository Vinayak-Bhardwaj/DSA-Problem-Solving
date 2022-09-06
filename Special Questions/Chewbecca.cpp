#include<bits/stdc++.h>
using namespace std;

int chewbecca(int n) {
    // BASE CASE
    if(n == 0 || n == 9) {
        return n;                                   // returning n for n = 9 because we have to keep the length same
    }
    // RECURSIVE CASE
    int sum = 0;
    int dig = n%10;
    int newDig = 9-dig;
    if(dig < newDig) {
        sum = sum + (chewbecca(n/10) * 10) + dig;
    }
    else {
        sum = sum + (chewbecca(n/10) * 10) + newDig;
    }

    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << chewbecca(n);
    return 0;
}