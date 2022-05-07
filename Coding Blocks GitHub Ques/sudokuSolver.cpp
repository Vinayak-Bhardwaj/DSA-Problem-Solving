#include<bits/stdc++.h>
using namespace std;

bool canWeKeepItHere(int mat[][9], int number,int i, int j, int n) {

    //Now we have to check 2 conditions 1.same row and column and 2.same box
    for(int k = 0; k < 9; k++) {
        if(mat[i][k] == number || mat[k][j] == number) {
            return false;
        }
    }

    // For the same box condition we have to first get the starting point of the box
    n = sqrt(n);
    int starti = (i/n) * n;
    int startj = (j/n) * n;
    for(int p = starti; p < starti + n; p++) {
        for(int q = startj; q < startj + n; q++) {
            if(mat[p][q] == number) {
                return false;
            }
        }
    } 
    return true;
}

bool sudokuSolver(int mat[][9], int i, int j, int n) {
    // BASE CASE
    if(i == n) {
        // Print the solution
        for(int p = 0; p < n; p++) {
            for(int q = 0; q < n; q++) {
                cout << mat[p][q] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return true;
    }
    if(j == n) {
        return sudokuSolver(mat, i + 1, 0, n);
    }
    if(mat[i][j] != 0) {
        return sudokuSolver(mat, i, j + 1, n);
    }
    // RECURSIVE CASE

    // We have to maintain a loop to try and keep one number at a time at the particular position and check whether we can keep it there or not, and if yes so whethere with that placement we can have a successfull future arrangement or not? if yes so congo, if not so sorry try another number
    for(int number = 1; number <= n; number++) {

        // Like rat in a maze and nqueens we have to first check whether we can keep it there or not
        if(canWeKeepItHere(mat, number, i, j, n)) {
            // if yes then place that number there and ask recursion to solve further table if it solves then nice, if not then we have to backtrack so that we can try anothere number
            mat[i][j] = number;
            if(sudokuSolver(mat, i, j + 1, n)) {
                return true;
            }

            // if no then backtrack
            mat[i][j] = 0;
        }
    }
    return false;
}

int main() {
    int mat[9][9] =
	{{5,3,0,0,7,0,0,0,0},
	{6,0,0,1,9,5,0,0,0},
	{0,9,8,0,0,0,0,6,0},
	{8,0,0,0,6,0,0,0,3},
	{4,0,0,8,0,3,0,0,1},
	{7,0,0,0,2,0,0,0,6},
	{0,6,0,0,0,0,2,8,0},
	{0,0,0,4,1,9,0,0,5},
	{0,0,0,0,8,0,0,7,9}};

    if(sudokuSolver(mat, 0, 0, 9)) {
        cout << "Congratulations Sudoku Solved";
    }
    else {
        cout << "Congratulations Sudoku not Solved";
    }
    return 0;
}