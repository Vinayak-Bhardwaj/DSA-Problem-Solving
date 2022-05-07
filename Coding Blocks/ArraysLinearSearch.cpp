#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli n, arr[100000], element, i;
    cin >> n;
    for(lli i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> element;
    for(i = 0; i < n; i++) {
        if(arr[i] == element) {
            cout<< i;
            break;
        }
    }
    if(i == n) {
        cout << "-1";
    }
    return 0;
}