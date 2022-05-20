#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[100][100], m, n;
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int sr = 0, sc = 0, er = m - 1, ec = n - 1;

    while(sr <= er && sc <= ec) {

        // 1. Print the sr from sc to ec
        for(int i = sc; i <= ec; i++) {
            cout << arr[sr][i] << " ";
        }
        sr++;

        // 2. Print the ec from sr to er
        for(int i = sr; i <= er; i++) {
            cout << arr[i][ec] << " ";
        }
        ec--;

        // 3. Print the er from ec to sc
        for(int i = ec; i >= sc; i--) {
            cout << arr[er][i] << " ";
        }
        er--;

        // 4. Print the sc from er to sr
        for(int i = er; i >= sr; i--) {
            cout << arr[i][sc] << " ";
        }
        sc++;
    }

    return 0;
}