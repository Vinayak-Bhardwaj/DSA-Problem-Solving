#include<bits/stdc++.h>
using namespace std;

void f(int n) {
    if(n <= 1) {
        cout << n;
    }
    else {
        f(n / 2);
        cout << n%2;
    }
}

int main() {
    f(270);
    return 0;
}