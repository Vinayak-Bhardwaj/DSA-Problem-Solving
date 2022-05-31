#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    bool present = binary_search(arr, arr + n, key);
    if(present) {
        cout << "The Key is present";
    }
    else {
        cout << "The Key is not present";
    }
    return 0;
}