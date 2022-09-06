#include<bits/stdc++.h>
using namespace std;

bool IncDec(int* arr, int n) {
    int it = 0, i;

    for(i = 0; i < n - 1; i++) {
        if(arr[i + 1] >= arr[i]) {
            it = i;
            break;
        }
    }

    if(i == n-1) {
        it = n - 1;                             // Even if this case happens still order is till second last while last is there to maintain the increasing order as one element can always be inc or dec if there is no one to compare the element with
    }

    for(i = it; i < n - 1; i++) {
        if(arr[i] >= arr[i + 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int n, arr[1000000];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if(IncDec(arr, n)) {
        cout << "True";
    }
    else {
        cout << "False";
    }

    return 0;
}