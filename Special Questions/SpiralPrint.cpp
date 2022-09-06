#include<bits/stdc++.h>
using namespace std;

void spiral(int mat[][1000], int m, int n) {
    int sr = 0, sc = 0, er = m-1, ec = n-1;

    while(sr <= er && sc <= ec) {

        //1. Print starting row
        for(int i = sc; i <= ec; i++) {
            cout << mat[sr][i] << ", ";
        }
        sr++;

        if(sc <= ec) {
            //2. Print ending column
            for(int i = sr; i <= er; i++) {
                cout << mat[i][ec] << ", ";
            }
            ec--;
        }

        if(sr <= er) {
            //3. Print ending row
            for(int i = ec; i >= sc; i--) {
                cout << mat[er][i] << ", ";
            }
            er--;
        }

        //4. Print starting column
        for(int i = er; i >= sr; i--) {
            cout << mat[i][sc] << ", ";
        }
        sc++;
    }

	cout << "END";
}

int main() {
    int m, n, mat[1000][1000];
    cin >> m >> n;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    spiral(mat, m, n);

    return 0;
}