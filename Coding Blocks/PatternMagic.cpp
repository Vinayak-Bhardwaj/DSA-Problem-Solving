#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    //Printing the 1st half
    for(int i = 1; i <= n; i++) {
        
        //Printing the 1st inverted triangle of *
        for(int j = 1; j <= n-i+1; j++) {
            cout << "*";
        }

        // Printing the 1st upright space triangle
        for(int space1 = 1; space1 <= i - 1; space1++) {
            cout << " ";
        }

        //Printing the 2nd upright space triangle
        for(int space2 = 1; space2 <= i - 2; space2++) {
            cout << " ";
        }

        //Printing the 2nd inverted triangle of *
        if(i != 1) {
            for(int j = 1; j <= n-i+1; j++) {
                cout << "*";
            }
        }
        else {
            for(int j = 1; j <= n-i; j++) {
                cout << "*";
            }
        }
        cout << endl;
    }

    //Printing the 2nd half
    for(int i = 2; i <= n; i++) {

        //Printing the 1st triangle
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }

        //Printing the 1st space triangle
        for(int space1 = 1; space1 <= n-i; space1++) {
            cout << " ";
        }

        //Printing the 2nd space triangle
        for(int space2 = 1; space2 <= n-i-1; space2++) {
            cout << " ";
        }

        //Printing the 2nd triangle
        if(i != n) {
            for(int j = 1; j <= i; j++) {
                cout << "*";
            }
        }
        else {
            for(int j = 1; j <= i - 1; j++) {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}