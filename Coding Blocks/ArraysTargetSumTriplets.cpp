#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli n, arr[100000], target;
    cin >> n;
    for(lli i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> target;

    sort(arr, arr + n);

    for(lli i = 0; i < n; i++) {
        lli target1 = target - arr[i];
        for(lli j = i + 1; j < n; j++) {
            lli target2 = target1 - arr[j];
            for(lli k = j + 1; k < n; k++) {
                if(arr[k] == target2) {
                    cout << arr[i] << ", " << arr[j] << " and " << arr[k] << endl;
                }
            }
        }
    }
    return 0;
}