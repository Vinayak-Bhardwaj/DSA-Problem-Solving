#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
    lli n, sum = 0, counter = 0;
    cin >> n;
    while(n > 0) {
        lli rem = n % 8;
        sum = sum + pow(10, counter) * rem;
        counter++;
        n /= 8;
    }
    cout << sum;
    return 0;
}