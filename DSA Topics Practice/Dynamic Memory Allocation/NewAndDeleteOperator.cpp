#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    cout << sizeof(a);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        cout << a[i];
    }

    delete [] a;

    return 0;
}