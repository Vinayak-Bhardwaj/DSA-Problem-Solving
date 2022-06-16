#include<bits/stdc++.h>
using namespace std;

int NStairs(int n, int k) {
    // BASE CASE
    if(n == 0) {
        return 1;
    }
    if(n < 0) {
        return 0;
    }
    // RECURSIVE CASE
    int result = 0;
    for(int i = 1; i <= k; i++) {
        result = result + NStairs(n - i, k);
    }
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    cout << NStairs(n, k) << endl;
    
    return 0;
}