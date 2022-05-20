#include<bits/stdc++.h>
using namespace std;
int main() {
    int m, n, arr[100][100], arr1[10000];
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int row = 0;
    int col = 0;
    bool up = true;
    int i = 0;

    while(row < m && col < n) {

        // if diagnol is going up
        if(up) {
            while(row > 0 && col < n-1) {
                //cout << arr[row][col] << " ";
                arr1[i++] = arr[row][col];
                row--;
                col++;
            }
            //cout << arr[row][col] << " ";
            arr1[i++] = arr[row][col];
            if(col == n - 1) {
                row++;
            }
            else {
                col++;
            }
        }

        //Downward diagnol
        else {  
            while(col > 0 && row < m - 1) {
                //cout << arr[row][col] << " ";
                arr1[i++] = arr[row][col];
                row++;
                col--;
            }
            //cout << arr[row][col] << " ";
            arr1[i++] = arr[row][col];
            if(row == m - 1) {
                col++;
            }
            else {
                row++;
            }
        }
        // To toggle between upaward and downward
        up = !up;
    }

    for(int j = 0; j < i; j++) {
        cout << arr1[j] << " ";
    }

    // while(row != m && col != n) {
        
    //     // 1. if odd column then print all the diagnol elements from upward to downward
    //     if((col % 2 != 0) && row == 0) {
    //         while(col >= 0) {
    //             cout << arr[row][col] << " ";
    //             row++;
    //             col--;
    //         }
    //         row--;
    //         col++;
    //     }
    //     if(col == (n-1) && (row % 2 != 0)) {
    //         while(row <= m) {
    //             cout << arr[row][col] << " ";
    //             row++;
    //             col--;
    //         }
    //         row--;
    //         col++;
    //     }

    //     // 2. if even row then print all the diagnol elements from downward to upward
    //     if((row % 2 == 0) && col == 0) {
    //         while(row >= 0) {
    //             cout << arr[row][col] << " ";
    //             row--;
    //             col++;
    //         }
    //         row++;
    //         col--;
    //     }
    //     if(row == (m-1) && (col % 2 == 0)) {
    //         while(col <= n) {
    //             cout << arr[row][col] << " ";
    //             row--;
    //             col++;
    //         }
    //         row++;
    //         col--;
    //     }

    //     // 3. shifting pointers down in column
    //     if(col == 0 && (row % 2 != 0)) {
    //         row++;
    //     }
    //     if(col == (n-1) && (row % 2 == 0)) {
    //         row++;
    //     }
        
    //     // if(col == 0 || col == n-1) {
    //     //     row++;
    //     //     continue;
    //     // } 

    //     // 4. Shifting pointers ahead in row
    //     if(row == 0 && (col % 2 == 0)) {
    //         col++;
    //     }
    //     if(row == (m-1) && (col % 2 != 0)) {
    //         col++;
    //     }
        
        
    //     // if(row == 0 || row == m-1) {
    //     //     col++;
    //     //     continue;
    //     // }
    // }
    return 0;
}