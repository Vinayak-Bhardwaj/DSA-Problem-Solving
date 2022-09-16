#include<bits/stdc++.h>
using namespace std;

int knapsnack(int* wt, int* price, int maxCap, int n) {
    // BASE CASE
    if(n == 0 || maxCap == 0) {
        return 0;
    }
    // RECURSIVE CASE
    int priceInc = INT_MIN, priceExc = INT_MIN;
    
    if(wt[n-1] <= maxCap) {
        priceInc = price[n-1] + knapsnack(wt, price, maxCap - wt[n-1], n - 1);
    }
    
    priceExc = 0 + knapsnack(wt, price, maxCap, n-1);

    return max(priceInc, priceExc);
}

int main() {
    int price[] = {20, 50, 60, 100};
    int wt[] = {1, 2, 3, 5};
    int n = sizeof(price) / sizeof(int);
    int maxCap;

    cin >> maxCap;

    cout << knapsnack(wt, price, maxCap, n);

    return 0;
}