#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        //Printing the spaces
        for(int space = 1; space <= n - i; space++) {
            cout << "\t";
        }

        //Printing the 1st number triangle
        int increamenter = i;
        for(int j = 1; j <= i; j++) {
            cout << increamenter << "\t";
            increamenter++;
        }

        //printing the 2nd number triangle
        int decreamenter = 2 * i - 2;
        for(int j = 1; j <= i - 1; j++) {
            cout << decreamenter << "\t";
            decreamenter--;
        }
        cout << endl;
    }
    return 0;
}