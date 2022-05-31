#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {10, 20, 40, 40, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;

    // Lower Bound
    int* lb = lower_bound(arr, arr + n, key);
    cout << "Lower Bound is: " << *lb << " at index : " << lb - arr << endl;

    // Upper Bound
    int* ub = upper_bound(arr, arr + n, key);
    cout << "Upper Bound is: " << *ub << " at index : " << ub - arr << endl;
    cout << "The last index of key is: " << ub - arr - 1 << endl;

    // Finding number of occurences
    cout << "The number of occurences of key is : " << ub - lb;

    return 0;
}