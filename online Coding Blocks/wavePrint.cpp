#include<bits/stdc++.h>
using namespace std;
int main() {
    int m, n, arr[100][100];
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Wave Print Column wise
    for(int j = 0; j < n; j++) {
        if(j % 2 == 0) {
            for(int i = 0; i < m; i++) {
                cout << arr[i][j] << " ";
            }
        }
        else {
            for(int i = m - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
    return 0;
}