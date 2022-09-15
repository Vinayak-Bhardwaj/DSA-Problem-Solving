#include<bits/stdc++.h>
using namespace std;

bool subsetSumEasy(int* arr, int n, int i = 0, int sum = -2, bool included = false) {
    // BASE CASE
    if(i == n) {
        return (sum == 0 && included);
    }
    // RECURSIVE CASE
    bool inc = subsetSumEasy(arr, n, i + 1, sum + arr[i], true);
    bool exc = subsetSumEasy(arr, n, i + 1, sum, included);

    return (inc || exc);
}

int main() {
    int arr[] = {1, 3, 2, -3};
    int n = sizeof(arr) / sizeof(int);

    if(subsetSumEasy(arr, n)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}