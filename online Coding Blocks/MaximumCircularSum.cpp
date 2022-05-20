#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, maxSum = INT_MIN, wi, wj;
        cin >> n;
        int arr[2*n];
        // Inputting the array
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            arr[i + n] = arr[i];
        }

        // Printing the array
        for(int i = 0; i < 2*n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        // Calculating the csum array
        int csum[2*n] = {0};
        for(int i = 1; i < 2*n; i++) {
            csum[i] = csum[i - 1] + arr[i];
        }

        for(int i = 0; i < 2*n; i++) {
            cout << csum[i] << " ";
        }
        cout << endl;


        for(int i = 0; i < 2*n; i++) {                              // for(int i = 0; i < n; i++) {
            for(int j = i; j < (i+n) && j < 2*n; j++) {             // for(int j = i; j < (i+n); j++) {
                int sum = 0;
                sum = csum[j] - csum[i - 1];
                if(sum > maxSum) {
                    maxSum = sum;
                    wi = i;
                    wj = j;
                }
            }
        }
        cout << "Maximum Sum is : " << maxSum << endl;
        cout << wi << " " << wj << endl;
    }
    return 0;
}