#include<bits/stdc++.h>
using namespace std;

// bool isSumZero(int* arr, int n, int i, int j, int sum) {
//     // BASE CASE
//     if(i == n) {
//         return false;
//     }
//     if(j == n) {
//         return;
//     }
//     // RECURSIVE CASE
//     sum = sum - arr[i];
//     if(arr[j] == sum) {
//         return true;
//     }
//     return isSumZero(arr, n, i, j + 1, sum);
//     return isSumZero(arr, n, i + 1, 0, sum);
// }

bool subsetSumEasy(int* arr, int n, int i = 0, int sum = 0, bool included = false)
{
    if (i == n)
    {
        return (sum == 0 && included);
    }

    bool inc = subsetSumEasy(arr, n, i + 1, sum + arr[i], true);
    bool exc = subsetSumEasy(arr, n, i + 1, sum, included);

    return inc || exc;
}

int main() {
    int test;
    cin >> test;
    while(test--) {
        int n, arr[1000];
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if(subsetSumEasy(arr, n)) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
        cout << endl;
    }
    return 0;
}