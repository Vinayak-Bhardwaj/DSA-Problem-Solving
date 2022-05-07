#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {

        //Printing the 1st triangle
        for(int j = 1; j <= i; j++) {
            cout << j << "\t";
        }

        //Printing the 1st space triangle
        for(int space1 = 1; space1 <= n-i; space1++) {
            cout << "\t";
        }

        //Printing the 2nd space triangle
        for(int space2 = 1; space2 <= n-i-1; space2++) {
            cout << "\t";
        }

        //Printing the 2nd triangle
        if(i != n) {
            int l = i;
            for(int j = 1; j <= i; j++) {
                cout << l << "\t";
                l--;
            }
        }
        else {
            int l = i - 1;
            for(int j = 1; j <= i-1; j++) {
                cout << l << "\t";
                l--;
            }
        }
        cout << endl;
    }
    return 0;
}