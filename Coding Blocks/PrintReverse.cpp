#include<bits/stdc++.h>
using namespace std;
int main() {
    int num1, num2 = 0;
    cin >> num1;
    while(num1 != 0) {
        int rem = num1 % 10;
        num2 = num2 * 10 + rem;
        num1 /= 10;
    }
    cout << num2;
    return 0;
}