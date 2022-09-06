#include<bits/stdc++.h>
using namespace std;

int maxSumPath(int* arr1, int* arr2, int m, int n) {
    int i = 0, j = 0, sum1 = 0, sum2 = 0, res = 0;

    while(i < m && j < n) {
        if(arr1[i] < arr2[j]) {
            sum1 = sum1 + arr1[i++];
        }
        else if(arr1[i] > arr2[j]) {
            sum2 = sum2 + arr2[j++];
        }
        else {
            res = res + max(sum1, sum2) + arr1[i];
            sum1 = 0;
            sum2 = 0;
            i++;
            j++;
        }
    }

    while(i < m) {
        sum1 += arr1[i++];
    }
    while(j < n) {
        sum2 += arr2[j++];
    }

    res = res + max(sum1, sum2);

    return res;
}

int main() {
    int m, n, arr1[100000], arr2[100000];
    cin >> m >> n;

    for(int i = 0; i < m; i++) {
        cin >> arr1[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    cout << maxSumPath(arr1, arr2, m, n);

    return 0;
}