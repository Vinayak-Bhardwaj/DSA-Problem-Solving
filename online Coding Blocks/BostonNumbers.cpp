#include<bits/stdc++.h>
using namespace std;
#define lli long long int

bool checkPrime(lli n) {
    for(lli i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

lli sumOfDigits(lli n) {
    lli sum = 0;
    while(n != 0) {
        lli rem = n % 10;
        sum += rem;
        n /= 10;
    }
    return sum;
}

lli primeFactors(lli n) {
    lli sum = 0;
    for(lli i = 2; i <= n; i++) {
        if(checkPrime(i)) {
            while(n % i == 0) {
                //cout << i << endl;
                if(i >= 10) {
                    sum = sum + (sumOfDigits(i));
                }
                else {  
                    sum = sum + i;
                }
                n = n / i;
            }
        }
    }
    return sum;
}

int main() {
    lli n;
    cin >> n;
    // cout << primeFactors(n) << endl;
    // cout << sumOfDigits(n) << endl;
    if(primeFactors(n) == sumOfDigits(n)) {
        cout << "1";
    }
    else { 
        cout << "0";
    }
    return 0;
}