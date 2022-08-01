#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--) {
        bool ans = false;
        int minAB, minBC, minAC, A, B, C;
        cin >> minAB >> minBC >> minAC;

        int ct1 = 0, ct2 = 0, ct3 = 0;

        A = minAB;
        B = minAB;

        while(B >= minAB) {
            B = minBC;
            C = minBC;
            while(C >= minBC) {
                C = minAC;
                while(A >= minAC) {
                    ans = true;
                    // return;
                }
                
            }
        }


        



        cout << endl;
    }
    return 0;
}