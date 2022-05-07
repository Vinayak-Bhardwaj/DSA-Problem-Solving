#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, first, second;
    cin >> n;
    first = n/2 + 1;
    second = n/2;

    //Printing the 1st half
    for(int i = 1; i <= first; i++) {

        //Printing 1st space triangle
        for(int space1 = 1; space1 <= first - i; space1++) {
            cout << "\t";
        }

        //Printing the 1st * triangle
        for(int j = 1; j <= i; j++) {
            cout << "*\t";
        }

        //Printing the 2nd * triangle
        for(int j = 1; j <= i - 1; j++) {
            cout << "*\t";
        }
        cout << endl;
    }

    //Printing the 2nd half
    for(int i = 1; i <= second; i++) {

        //Printing 1st space triangle
        for(int space1 = 1; space1 <= i; space1++) {
            cout << "\t";
        }

        //Printing the 1st * triangle
        for(int j = 1; j <= second - i + 1; j++) {
            cout << "*\t";
        }

        //Printing the 2nd * triangle
        for(int j = 1; j <= second - i; j++) {
            cout << "*\t";
        }
        cout << endl;
        
    }
    return 0;
}