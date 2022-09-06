// #include<bits/stdc++.h>
// using namespace std;

// int trailingZeroes(int n) {
//     int sum = 0, d = 5;
//     while((n/d) != 0) {
//         sum = sum + (n/d);
//         d = d*d;
//     }
//     return sum;
// }

// int main() {
//     int n;
//     cin >> n;
//     cout << trailingZeroes(n);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int arr[] = {1, 5, 9, 0, -1, 8, 3, 5, 6, 4, 7};
    int n = sizeof(arr) / sizeof(int);

    // sort(arr, arr + n, compare);

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}