#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[] = {1, 2, 3};
    int n = sizeof(a) / sizeof(int);

    do {
        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    } while(next_permutation(a, a + n) == true);

    return 0;
}