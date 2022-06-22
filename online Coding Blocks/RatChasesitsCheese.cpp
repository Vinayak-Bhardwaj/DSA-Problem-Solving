#include<bits/stdc++.h>
using namespace std;

bool ratInAMaze(char maze[][1000], int sol[][1000], int i, int j, int m, int n) {
    // BASE CASE
    if((i == m - 1) && (j == n - 1)) {
        
        sol[i][j] = 1;   
        
        //Print the solution
        for(int p = 0; p < m; p++) {
            for(int q = 0; q < n; q++) {
                cout << sol[p][q] << " ";
            }
            cout << endl;
        }

        return true;
    }

    // RECURSIVE CASE

    sol[i][j] = 1;

    // For Right
	if((j + 1 < n) && (maze[i][j + 1] != 'X')) {

        bool answerRight = ratInAMaze(maze, sol, i, j + 1, m, n);
        if(answerRight) {
            return true;
        }
    }

    // For Down
	if((i + 1 < m) && (maze[i + 1][j] != 'X')) {

        bool answerDown = ratInAMaze(maze, sol, i + 1, j, m, n);
        if(answerDown) {
            return true;
        }
    }

	// For Up
	if((i - 1 >= 0) && (maze[i - 1][j] != 'X') && (sol[i - 1][j] != 1)) {

        bool answerUp = ratInAMaze(maze, sol, i - 1, j, m, n);
        if(answerUp) {
            return true;
        }
    }

    // For Left
	if((j - 1 >= 0) && (maze[i][j - 1] != 'X') && (sol[i][j - 1] != 1)) {

        bool answerLeft = ratInAMaze(maze, sol, i, j - 1, m, n);
        if(answerLeft) {
            return true;
        }
    }

    sol[i][j] = 0;

    return false;
}

int main() {
    int m, n;
    int sol[1000][1000] = {0};
    char maze[1000][1000];

    cin >> m >> n;

    cin.ignore();

    for(int i = 0; i < m; i++) {
        cin >> maze[i];
    }

    if(ratInAMaze(maze, sol, 0, 0, m, n) == false) {
        cout << "NO PATH FOUND";
    }

    return 0;
}