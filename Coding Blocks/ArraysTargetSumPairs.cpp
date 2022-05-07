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
        lli search = target - arr[i];
        for(lli j = i + 1; j < n; j++) {
            if(search == arr[j]) {
                cout << arr[i] << " and " << arr[j] << endl;
                break;
            }
        }
    }
    return 0;
}