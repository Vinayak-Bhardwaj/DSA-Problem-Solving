#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, arr[100000], sum, ptri, ptrj;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> sum;
    ptri = 0, ptrj = n - 1;

    sort(arr, arr + n);

    while(ptri < ptrj) {
        int res = arr[ptri] + arr[ptrj];
        if(res == sum) {
            cout << arr[ptri] << " " << arr[ptrj] << endl;
            ptri++;
            ptrj--;
        }
        else if(res > sum) {
            ptrj--;
        }
        else {
            ptri++;
        }
    }

    return 0;
}