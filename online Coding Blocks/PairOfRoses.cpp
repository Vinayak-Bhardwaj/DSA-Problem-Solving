#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, money, rose1, rose2, diff = INT_MAX;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> money;

        sort(arr, arr + n);

        for(int i = 0; i < n; i++) {
            int target = money - arr[i];
            for(int j = i + 1; j < n; j++) {
                if(arr[j] == target) {
                    if(arr[j] - arr[i] < diff) {
                        rose1 = arr[i];
                        rose2 = arr[j];
                        diff = rose2 - rose1;
                    }
                }
            }
        }

        cout << "Deepak should buy roses whose prices are " << rose1 <<" and " << rose2 <<"." << endl;
    }
    return 0;
}