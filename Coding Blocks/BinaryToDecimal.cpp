#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main() {
    lli n, counter = 0, sum = 0;
    cin >> n;
    while(n > 0) {
        lli rem = n % 10;
        sum = sum + pow(2, counter) * rem;
        counter++;
        n /= 10;
    }
    cout << sum;
    return 0;
}