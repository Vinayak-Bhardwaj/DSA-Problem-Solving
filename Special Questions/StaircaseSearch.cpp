#include<bits/stdc++.h>
using namespace std;

void staircaseSearch(int arr[100][100], int m, int n, int key) {
    int row = 0, col = n-1;
    while(row >= 0 && row < m && col >= 0 && col < n) {
        if(arr[row][col] == key) {
            cout << row << ", " << col << endl;
            break;
        }
        else if(arr[row][col] > key) {
            col--;
        }
        else {
            row++;
        }
    }
}

int main() {
    int m, n, arr[100][100], key;
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cin >> key;

    staircaseSearch(arr, m, n, key);

    return 0;
}