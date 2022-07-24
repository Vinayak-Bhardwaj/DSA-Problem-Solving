#include<bits/stdc++.h>
using namespace std;

bool checker(pair<int, int> p1, vector<pair<int, int>> vect) {
    for(auto it: vect) {
        if(p1 == it) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    vector<pair<int, int>> vect;
    int sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        pair<int, int> pInsert;

        //1. Along the column
        for(int row = 1; row <= 8; row++) {
            pInsert.first = row;                  // Changing row
            pInsert.second = y;                   // static column
            if(checker(pInsert, vect)) {
                sum++;
                vect.push_back(pInsert);
            }
        }


        // 2. Along the column
        for(int col = 1; col <= 8; col++) {
            pInsert.first = x;
            pInsert.second = col;
            if(checker(pInsert, vect)) {
                sum++;
                vect.push_back(pInsert);
            }
        }
        
    }

    cout << sum;
    return 0;
}