#include<bits/stdc++.h>
using namespace std;

int maxSum1(int* arr, int n) {
    
    int res = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            
            int sum = 0;
            for(int k = i; k < j; k++) {
                sum = sum + arr[k];
            }

            res = max(res, sum);
        }
    }

    return res;
}

void maxSum2(int* arr, int n) {
    int cSum[n] = {0};

    // Calculating the CSUM array
    cSum[0] = arr[0];

    for(int i = 1; i < n; i++) {
        cSum[i] = cSum[i - 1] + arr[i];
    }

    int res = INT_MIN;
    int wi, wj;

    for(int i = 1; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sumWindow = cSum[j] - cSum[i - 1];
            if(sumWindow > res) {
                res = sumWindow;
                wi = i;
                wj = j;
            }
        }
    }

    cout << "max Sum is " << res << endl;
    cout << "Max Sub array is: ";
    for(int i = wi; i <= wj; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return;
}

int maxSum3(int* arr, int n) {
    // This algo follows the kadanes algorithm
    int maxSoFar = INT_MIN, maxEnding = 0;

    for(int i = 0; i < n; i++) {
        maxEnding += arr[i];
        if(maxEnding > maxSoFar) {
            maxSoFar = maxEnding;
        }
        if(maxEnding < 0) {
            maxEnding = 0;
        }
    }

    return maxSoFar;
}

int main() {
    int n, arr[100000];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << maxSum1(arr, n) << endl;
    maxSum2(arr, n);
    cout << maxSum3(arr, n) << endl;

    return 0;
}