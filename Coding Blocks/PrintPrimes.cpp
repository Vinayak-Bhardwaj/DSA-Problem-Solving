#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n) {
    int i;
    for(i = 2; i < n; i++) {
        if(n % i == 0)
            break;
    }
    return i == n;
}

int main() {
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++) {
        if(checkPrime(i))
            cout << i << endl;
    }
    return 0;
}