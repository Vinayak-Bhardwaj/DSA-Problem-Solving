#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli n, first, second;
    cin >> n;
    first = n/2 + 1;
    second = n/2;
    for(lli i = 1; i <= first; i++) {

        //Printing the 1st inverted triangle
        for(lli j = 1; j <= first - i + 1; j++) {
            cout << "*\t";
        }

        //Printing the 1st upright space triangle
        for(lli space1 = 1; space1 <= i - 1; space1++) {
            cout << "\t";
        }

        //Printing the 2nd upright space triangle
        for(lli space2 = 1; space2 <= i - 2; space2++) {
            cout << "\t";
        }

        //Printing the 2nd * triangle
        if(i != 1) {
            for(lli j = 1; j <= first - i + 1; j++) {
                cout << "*\t";
            } 
        }
        else {
            for(lli j = 1; j <= first - i; j++) {
                cout << "*\t";
            } 
        }
        
        cout << endl;
    }
    for(lli i = 1; i <= second; i++) {

        //Printing the 1st triangle
        for(lli j = 1; j <= i + 1; j++) {
            cout << "*\t";
        }

        //Printing the space triangle
        for(lli space1 = 1; space1 <= second - i; space1++) {
            cout << "\t";
        }

        //Printing the 2nd space triangle
        for(lli space2 = 1; space2 <= second - i - 1; space2++) {
            cout << "\t";
        }

        //Printing the 2nd triangle
        if(i != second) {
            for(lli j = 1; j <= i + 1; j++) {
                cout << "*\t";
            }
        }
        else {
            for(lli j = 1; j <= i; j++) {
                cout << "*\t";
            }
        }
        cout << endl;
    }
    return 0;
}