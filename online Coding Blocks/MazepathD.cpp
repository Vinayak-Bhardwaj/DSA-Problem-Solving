#include<bits/stdc++.h>
using namespace std;

int counter = 0;

void mazePath(int row, int col, int sol[][10], int i, int j, string ans) {
    // BASE CASE
    if((i == row - 1) && (j == col - 1)) {
        sol[i][j] = 1;

        // for(int p = 0; p < row; p++) {
        //     for(int q = 0; q < col; q++) {
        //         cout << sol[p][q] << " ";
        //     }
        //     cout << endl;
        // }
        
        cout <<ans << " ";
        counter++;
    }

    // RECURSIVE CASE
    
    sol[i][j] = 1;

    if(i + 1 < row and sol[i+1][j] == 0) {
        mazePath(row, col, sol, i + 1, j, ans+'V');
    }
    
    if((j + 1) < col and sol[i][j+1] == 0) {
        mazePath(row, col, sol, i, j + 1, ans+'H');
    }

	if(i + 1 < row and j + 1 < col and sol[i+1][j+1] == 0) {
		mazePath(row, col, sol, i + 1, j + 1, ans+'D');
	}

    sol[i][j] = 0;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int sol[10][10] = {0};

    string ans;
    
    mazePath(n1, n2, sol, 0, 0, ans);

    cout << endl <<counter;

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int counter = 0;

// bool mazePath(int row, int col, int sol[][10], int i, int j, string &ans) {
//     // BASE CASE
//     if((i == row - 1) && (j == col - 1)) {
//         sol[i][j] = 1;

//         for(int p = 0; p < row; p++) {
//             for(int q = 0; q < col; q++) {
//                 cout << sol[p][q] << " ";
//             }
//             cout << endl;
//         }
        
//         cout << ans << endl;
//         counter++;

//         return false;
//     }

//     // RECURSIVE CASE
    
//     // 1. First check the validity of the present position
    
//     sol[i][j] = 1;

//     if((j + 1) < col) {
//         bool answerRight = mazePath(row, col, sol, i, j + 1, ans);
//         if(answerRight) {
//             //ans.push_back('H');
//             ans = ans + 'H';
//             //cout << ans << endl;
//             return true;
//         }
//     }

//     if(i + 1 < row) {
//         bool answerDown = mazePath(row, col, sol, i + 1, j, ans);
//         if(answerDown) {
//             //ans.push_back('V');
//             ans = ans + 'V';
//             //cout << ans << endl;
//             return true;
//         }
//     }

//     // Diagnol Movement
// 	// if(i+1 < row && j+1 < col) {
// 	// 	bool answerDiagnol = mazePath(row, col, sol, i + 1, j + 1, ans);
// 	// 	if(answerDiagnol) {
// 	// 		ans.push_back('D');
// 	// 		return true;
// 	// 	}
// 	// }

//     sol[i][j] = 0;

//     return false;
// }

// int main() {
//     int n1, n2;
//     cin >> n1 >> n2;

//     int sol[10][10] = {0};

//     string ans;
    
//     mazePath(n1, n2, sol, 0, 0, ans);

//     cout << counter;

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// void update(string ans, int i) {
//     // BASE CASE
//     if(i == 5) {
//         cout << ans;
//         return;
//     }
//     ans.push_back('H');
//     update(ans, i + 1);
// }

// int main() {
//     string ans;
//     update(ans, 0);
//     return 0;
// }