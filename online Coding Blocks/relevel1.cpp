#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while(test--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int count = 0;

        for(int i = 0; i < n; i++) {
            int rem1 = x - arr[i];
            if(rem1 > 0 && (i+1 < n)) {
                int rem2 = rem1 - arr[i + 1];
                if(rem2 > 0) {
                    count = count + rem2;
                    arr[i + 1] = arr[i + 1] + rem2;
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}