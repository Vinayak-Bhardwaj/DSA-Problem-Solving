#include<bits/stdc++.h>
using namespace std;

int fabo(int num) {
    // BASE CASE
    if(num == 0 || num == 1) {
        return num;
    }
    // RECURSIVE CASE
    int ans = fabo(num - 1) + fabo(num - 2);
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << fabo(n);
    return 0;
}