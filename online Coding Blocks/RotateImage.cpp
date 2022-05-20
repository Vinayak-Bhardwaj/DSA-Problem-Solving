// Approach Used here is that we'll  take out the tanspose of the matrix by swapping the non diagnol elements with index i,j to index j,i
// And this needs to be done only for the 1 half of the matrix like upper triangular half or lower because if we do it for every element
// then once elements got swapped it will get again swapped if iterated once more. like element 0,2 gets swapped with element 2, 0 but when
// iterator comes to element 2, 0 it will again swap it with element 0, 2 which will defy our purpose, so use one half. Also once we get our
// transpose then print from reverse column and that's how you'll get your rotated answer

#include<bits/stdc++.h>
using namespace std;
int main() {
    int m, arr[100][100];
    cin >> m;
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // NEED TO TAKE THE TRANSPOSE OF MATRIX
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            if(i > j) {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[m - i - 1][j] << " ";
        }
        cout << endl;
    }

    return 0;

}