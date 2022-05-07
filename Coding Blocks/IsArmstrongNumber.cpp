#include<bits/stdc++.h>
using namespace std;
#define lli long long int

bool isArmstrong(lli num) {
    lli length = to_string(num).length();
    lli sum = 0, compare = num;
    while(num > 0) {
        lli rem = num % 10;
        sum = sum + pow(rem, length);
        num /= 10;
    }
    if(sum == compare) {
        return true;
    }
    return false;
}

int main() {
    lli num;
    cin >> num;
    cout << (isArmstrong(num) == 1 ? "true" : "false");
    return 0;
}