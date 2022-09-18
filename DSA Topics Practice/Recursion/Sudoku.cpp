// 1. Dekh ap itna clear hai ki tujhe meri need nahi, so mere rukne ka koi sense banta nahi so ye cheez ko yahi rok de wo zyada better hai
// 2. me jab isme aaya tha to merko manzoor tha ki jo bhi hoga isme sab accepted hai
// 3. dekh mujhe to pata nahi kaun sach bol raha hai aur kaun jhoot. fact is ki agar wo promises aur wo khushi chahe mere bts ke special msg par yaa fir saath rehne ke msg par, unme se kuch 1% tu mean karti to things would
// have been different.
// 4. and mujhe isse sahi karna bhi nahi hai. dekh iss sabse mujhe ek reality pata chal gayi hai ki me abhi aur shayad kaafi time tak iss cheeze
// ke liye ready nahi hu. maybe it's not in the cards for guys like us. Priorities saaf dikh rahi hai mujhe ab. sach batau mene kabhi expect nahi kiya tha ki tera msg aayega
//but accha hua aaya and we talked about it. atleast ek baat seekhi ki har baar kisi cheez yaa bond ka load pura apne upar lekr humesha apni galti batana is not right. Secondly I deserve better

//5. apoorva bas ek cheez kariyo aage se, ki jo feel karo ussi ko kehna seekho.

// I had a great time with you, and i will aways cherish those special moments. whether it be late night chit chats, stone paper scissor or rohit btc or me getting into every cafe's website to look which among them has the best ambience or those weird snaps, miss pretty fingers, or gift decide karna yaa fir mother aur riveria movie dekhkar dare dena jo wese aajtak tak to hua nahi. Ye or khatam ho jaayenge but ye memories nahi and these things make me wonder ki agar face to face mile hhote to kya hota . Thank you for everything. although it didn't turned out the way i wanted but koi naah ki fark painda hai

// one last time
// Adios amiga


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