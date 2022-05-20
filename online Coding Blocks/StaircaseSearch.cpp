#include<bits/stdc++.h>
using namespace std;
int main() {
    int m, n, arr[100][100], key;
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cin >> key;

    // StairCase Search Algo

    int pointi = 0;
    int pointj = n - 1;

    while(pointi < m && pointj >= 0) {
        if(arr[pointi][pointj] == key) {
            cout << pointi << " " << pointj << endl;
            break;
        }
        else if(arr[pointi][pointj] > key) {
            pointj--;
        }
        else {
            pointi++;
        }
    }
    return 0;
}