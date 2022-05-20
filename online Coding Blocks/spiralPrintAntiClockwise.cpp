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

    int sr = 0, er = m - 1, sc = 0, ec = n - 1;

    while(sr <= er && sc <= ec) {

        // 1. Print the staring column
        for(int i = sr; i <= er; i++) {
            cout << arr[i][sc] << ", ";
        }
        sc++;

        if(sr <= er) {
            // 2. Print the ending row
            for(int i = sc; i <= ec; i++) {
                cout << arr[er][i] << ", ";
            }
            er--;
        }

        if(sc <= ec) {
            // 3. Print the ending column
            for(int i = er; i >= sr; i--) {
                cout << arr[i][ec] << ", ";
            }
            ec--;
        }

        // 4. Print the starting row
        for(int i = ec; i >= sc; i--) {
            cout << arr[sr][i] <<", ";
        }
        sr++;
    }
    cout << "END";
    return 0;
}