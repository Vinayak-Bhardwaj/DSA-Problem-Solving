#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli T;
    cin >> T;
    while(T--) {
        lli N, K;
        cin >> N >> K;
        lli arr[N];
        lli sum = 0;
        for(lli i = 0; i < N; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        if(sum <= K) {
            cout << N << endl;
        }
        else {
            sort(arr, arr + N);
            // for(lli i = 0; i < N; i++) {
            //     cout << arr[i] << " ";
            // }
            // cout << endl;
            // cout << sum << endl << K << endl;
            while(sum > K) {
                //cout << "Inside" << endl;
                // for(lli i = 0; i < N; i++) {
                //     cout << arr[i] << " ";
                // }
                // cout << endl;
                //arr[N-1] = arr[N-1] / 2;
                sum = sum - (arr[N-1]/2);
                //cout << sum << endl;
                if(sum <= K) {
                    break;
                }
                else {
                    sum = sum + (arr[N-1]/2);
                    //cout << sum << endl;
                    sum = sum - arr[N-1];
                    //cout << sum << endl;
                    arr[N-1] = 0;
                    N--;
                }
            }
            lli counter = 0;
            for(lli i = 0; i < N; i++) {
                if(arr[i] != 0) {
                    counter++;
                }
            }
            cout << counter << endl;
        }
    }
    return 0;
}