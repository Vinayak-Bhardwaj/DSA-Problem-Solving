// This problem not focuses on area or multiplication or any other calculation, it just finding or analysing any general case of placing the tiles
// and forming a recursive case out of it and base case comes out by the edge cases


#include<bits/stdc++.h>
using namespace std;

int waysOfTiles(int n) {
    // BASE CASE
    if(n <= 3) {
        return 1;
    }
    // RECURSIVE CASE
    int sum = waysOfTiles(n - 1) + waysOfTiles(n - 4);
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << waysOfTiles(n);
    return 0;
}