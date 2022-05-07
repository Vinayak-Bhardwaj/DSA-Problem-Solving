#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli n, arr[1000000], max = INT_MIN;
    cin >> n;
    for(lli i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}