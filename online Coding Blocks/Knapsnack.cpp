#include<bits/stdc++.h>
using namespace std;

int knapsnack(int* wt, int* price, int capacity, int n) {
    // BASE CASE
    if(capacity == 0 || n == 0) {
        return 0;
    }
    // RECURSIVE CASE
    int inc = INT_MIN, exc = INT_MIN;

    //Including it for one time
    if(capacity >= wt[n - 1]) {
        inc = price[n - 1] + knapsnack(wt, price, capacity - wt[n - 1], n - 1);
    }

    // Not including it for one time
    exc = 0 + knapsnack(wt, price, capacity, n - 1);

    return max(inc, exc);
}

int main() {
    int price[] = {20, 50, 60, 100};
    int wt[] = {1, 2, 3, 5};
    int n;
    cout << knapsnack(wt, price, 6, 4);
    return 0;
}