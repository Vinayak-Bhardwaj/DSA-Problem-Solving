#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli T;
    cin >> T;
    while(T--) {
        lli n, arr[100000];
        cin >> n;
        for(lli i = 0; i < n; i++) {
            cin >> arr[i];
        }
        lli cost = 0;
        for(lli i = 0; i < n; i++) {
            for(lli j = i+1; j < n; j++) {
                if(arr[i] > arr[j])
                    cost++;
            }
        }
        cout << cost << endl;
    }
    return 0;
}