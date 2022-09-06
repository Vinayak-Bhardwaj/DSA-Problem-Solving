#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, arr[100000];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i + n] = arr[i];
    }

    // Printing the circular sum array
    for(int i = 0; i < 2*n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Calculating the csum array
    int csum[2*n] = {0};
    csum[0] = arr[0];

    for(int i = 1; i < 2*n; i++) {
        csum[i] = csum[i - 1] + arr[i];
    }

    // Calculating the max Sum
    int res = INT_MIN;

    for(int i = 1; i < 2*n; i++) {
        for(int j = i; j < (i + n) && j < 2*n; j++) {           // By applying 2*n condition it will limit itself to first half only otherwise when it applies condition j < i+n in second half then it will surely overflow out
            int sum = csum[j] - csum[i - 1];
            
            res = max(sum, res);
        }
    }

    cout << res;
    return 0;
}