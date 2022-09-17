#include<bits/stdc++.h>
using namespace std;

bool ratInAMaze(char maze[][10], int sol[][10], int i, int j, int m, int n) {
    // BASE CASE
    if((i == m - 1) && (j == n - 1)) {
        
        //Since it is a part of solution as well
        sol[i][j] = 1;   
        
        //Print the solution
        for(int p = 0; p < m; p++) {
            for(int q = 0; q < n; q++) {
                cout << sol[p][q] << " ";
            }
            cout << endl;
        }

        // Sol returned true
        return true;
    }

    // RECURSIVE CASE

    //1. Hum jis point par khade hai usse solution manna padega
    sol[i][j] = 1;

    //2. Hume check karna padega ki kya hum right me jaa sakte hai yaa nahi
    if((j + 1 < n) && (maze[i][j + 1] != 'X')) {

        //3. ab hume check karna padega ki chalo right me jaa to sakte hai but recursion jaakr batao ki answer aa raha hai yaa nahi
        bool answerRight = ratInAMaze(maze, sol, i, j + 1, m, n);
        if(answerRight) {
            return true;
        }
    }

    //4. Hume check karna padega ki kya hum neeche jaa sakte hai yaa nahi
    if((i + 1 < m) && (maze[i + 1][j] != 'X')) {

        //5. ab hume check karna padega ki chalo right me jaa to sakte hai but recursion jaakr batao ki answer aa raha hai yaa nahi
        bool answerDown = ratInAMaze(maze, sol, i + 1, j, m, n);
        if(answerDown) {
            return true;
        }
    }

    //6. dono jagah hi answer nahi aaya to solution possible hi nahi hai to jo sol maana tha wo galat hai
    sol[i][j] = 0;

    return false;
}

int main() {
    int m, n;
    int sol[10][10] = {0};
    char maze[10][10];

    cin >> m >> n;

    cin.ignore();

    for(int i = 0; i < m; i++) {
        cin >> maze[i];
    }

    if(ratInAMaze(maze, sol, 0, 0, m, n) == false) {
        cout << "-1";
    }

    return 0;
}