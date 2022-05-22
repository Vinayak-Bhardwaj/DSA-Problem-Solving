#include<bits/stdc++.h>
using namespace std;
int main() {
    int m, n, k, s;
    cin >> m >> n >> s >> k;

    char mat[100][100];
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    if(k >= s) {
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++) {
				
				if((j != n-1) && (mat[i][j] != '#')) {
					k--;
				}
				if(mat[i][j] == '.') {
					k = k - 2;
				}
				else if(mat[i][j] == '*') {
					k = k + 5;
				}
				else if(mat[i][j] == '#') {
					break;
				}
			}
		}
	}

    if(k >= s) {
        cout << "Yes" << endl << k;
    }
    else {
        cout << "No";
    }
    return 0;
}