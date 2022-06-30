#include<bits/stdc++.h>
using namespace std;

bool canPlace(int board[][10], int i, int j, int n) {
    
    // 1. checking the same corresponding row and column
    for(int k = 0; k < n; k++) {
        if(board[i][k] || board[k][j]) {
            return false;
        }
    }

    // 3. Check left diagnol
    int p = i, q = j;
    while(p >= 0 && q >= 0) {
        if(board[p][q] == 1) {
            return false;
        }
        p--;
        q--;
    }

    // 4. Check right diagnol
    p = i, q = j;
    while(p >= 0 && q < n) {
        if(board[p][q] == 1) {
            return false;
        }
        p--;
        q++;
    }

    return true;
}


bool NQueen(int board[][10], int i, int n) {
    // BASE CASE
    if(i == n) {
        // means that our iterator has crossed the board
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        
        cout << endl << endl;
        
        // if we return false then similar to rat and cheese problem it will look out for more options and print all the possible solutions
        //return true;
        return false;
    }
    // RECURSIVE CASE
    for(int j = 0; j < n; j++) {
        if(canPlace(board, i, j, n)) {
            board[i][j] = 1;

            bool nextPlacement = NQueen(board, i + 1, n);
            if(nextPlacement) {

                // means that our current placement is suitable for everyone for this row and for the system formed below
                return true;
            }

            // if flow reaches here it means that assumption was wrong and have to try on next one
            board[i][j] = 0;
        }
    }
    
    // if flow reaches here it means that in a given row it has tried all the possible options for the queen and none is suitable so it will return false to the above row 
    return false;
}

int main() {
    int board[10][10] = {0};
    int n;
    cin >> n;
    NQueen(board, 0, n);
    return 0;
}