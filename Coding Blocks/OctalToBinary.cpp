#include<bits/stdc++.h>
using namespace std;
#define lli long long int

lli octToDec(lli num) {
    lli sum = 0, counter = 0;
    while(num > 0) {
        lli rem = num % 10;
        sum = sum + pow(8, counter) * rem;
        counter++;
        num /= 10;
    }
    return sum;
}

lli decToBin(lli num) {
    lli sum = 0, counter = 0;
    while(num > 0) {
        lli rem = num % 2;
        sum = sum + pow(10, counter) * rem;
        counter++;
        num /= 2;
    }
    return sum;
}

int main() {
    lli n;
    cin >> n;
    cout << decToBin(octToDec(n));
    return 0;
}