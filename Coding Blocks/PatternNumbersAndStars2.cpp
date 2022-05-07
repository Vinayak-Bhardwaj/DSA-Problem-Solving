#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        //Printing the 1st Triangle
        for(int j = 1; j <= i; j++) {
            cout << j;
        }

        //Printing the 2nd * triangle
        for(int star = 1; star <= n - i; star++) {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}