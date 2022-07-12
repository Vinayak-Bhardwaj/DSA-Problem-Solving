#include<bits/stdc++.h>
using namespace std;

vector< pair<int, int>> vPair;
int a = 0;

bool canPlace(int board[10][10], int i, int j, int n) {
	
	//1. Check vertically and horizontally
	for(int k = 0; k < n; k++) {
		if(board[i][k] == 1 || board[k][j] == 1) {
			return false;
		}
	}

	//2. Check left diagnol
	int p = i, q = j;
	while(p >= 0 && q >= 0) {
		if(board[p][q] == 1) {
			return false;
		}
		p--;
		q--;
	}

	//3. Check right diagnol
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

bool NQueen(int board[10][10], int i, int n) {
	// BASE CASE
	if(i == n) {

        // for(int i = 0; i < n; i++) {
        //     for(int j = 0; j < n; j++) {
        //         cout << board[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        
        // cout << endl << endl;

		for(int i = 0; i < vPair.size(); i++) {
			cout << "{" << vPair[i].first << vPair[i].second << "} ";
		}
        a++;
        return false;
	}
	// RECURSIVE CASE
	for(int j = 0; j < n; j++) {
		if(canPlace(board, i, j, n)) {
			board[i][j] = 1;
            pair<int, int> p1;
            p1.first = i + 1;
            p1.second = ((j + 1) * (-1));
            vPair.push_back(p1);

			bool nextMoveValid = NQueen(board, i + 1, n);
			if(nextMoveValid) {
				return true;
			}

			board[i][j] = 0;
            p1.first = 0;
            p1.second = 0;
            vPair.pop_back();
		}
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	int board[10][10] = {0};
	NQueen(board, 0, n);
    cout << endl << a;
	return 0;
}