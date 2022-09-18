#include<bits/stdc++.h>
using namespace std;

bool canPlace(int mat[][9], int i, int j, int n, int number) {
    // 1. Shouldn't be in that column
    for(int col = 0; col < n; col++) {
        if(mat[i][col] == number) {
            return false;
        }
    }

    // 2. Shouldn't be in that row
    for(int row = 0; row < n; row++) {
        if(mat[row][j] == number) {
            return false;
        }
    }

    // 3. Shouldn't be in that gridj
    int startRow = (i/3) * 3;
    int startCol = (j/3) * 3;

    for(int p = startRow; p < (startRow + sqrt(n)); p++) {
        for(int q = startCol; q < (startCol + sqrt(n)); q++) {
            if(mat[p][q] == number) {
                return false;
            }
        }
    }

    return true;
}

bool solveSudoku(int mat[][9], int i, int j, int n) {
    // BASE CASE
    if(i == n) {
        // Print the matrix
        for(int p = 0; p < n; p++) {
            for(int q = 0; q < n; q++) {
                cout << mat[p][q] << " ";
            }
            cout << endl;
        }

        return true;
    }

    if(j == n) {
        return solveSudoku(mat, i + 1, 0, n);
    }

    if(mat[i][j] != 0) {
        return solveSudoku(mat, i, j + 1, n);
    }
    
    // RECURSIVE CASE
    for(int num = 1; num <= n; num++) {
        if(canPlace(mat, i, j, n, num)) {

            // assume
            mat[i][j] = num;

            bool canWeSolveWithThis = solveSudoku(mat, i, j + 1, n);

            if(canWeSolveWithThis) {
                return true;
            }
        }
    }

    mat[i][j] = 0;
    return false;
}

int main() {
    int mat[][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9},
    };

    solveSudoku(mat, 0, 0, 9);

    return 0;
}