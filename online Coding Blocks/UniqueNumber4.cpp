// By this method we can genralise anything for eg if we are given an + 1 number where all numbers repeat a times and we have to find
// the unique number we can do by this method


#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int arr[] = {3, 3, 3, 15, 6, 6, 6, 6, 3};
    int n = sizeof(arr) / sizeof(int);

    int cnt[64] = {0};

    // Part where we calculate the sum of the bit positions
    for(int i = 0; i < n; i++) {
        int pos = 0;
        int no = arr[i];
        while(no > 0) {
            if((no & 1) == 1) {
                cnt[pos]++;
            }
            pos++;
            no = no >> 1;
        }
    }

    int ans = 0, p = 1;
    
    
    // Part where we calculate the sum of the cnt array to find the indifferent number
    // Here again that error might come where we have overflow condition in the bucket so what we can do is to store in string using pushback function
    for(int i = 0; i < 64; i++) {
        cnt[i] %= 4;
        ans = ans + cnt[i]*p;
        p = p * 2;
    }

    cout << ans;

    return 0;
}