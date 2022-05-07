#include<bits/stdc++.h>
using namespace std;
#define lli long long int

bool isCheck(lli num) {
    int a = 0, b = 1, c = 0;
    while(c <= num) {
        if(c == num)
            return true;
        a = b;
        b = c;
        c = a + b;
    }
    return false;
}

int main() {
    lli num;
    cin >> num;
    if(isCheck(num)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}