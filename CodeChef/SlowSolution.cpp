#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli test;
    cin >> test;
    while(test--) {
        lli maxT, maxN, sumN;
        cin >> maxT >> maxN >> sumN;

        //lli num = maxT;
        lli res = 0;
        lli counterTest = 0;

        while(maxN <= sumN && counterTest != maxT) {
            res = res + (maxN * maxN);
            sumN = sumN - maxN;
            counterTest++;
        }

        if(counterTest != maxT) {
            res = res + (sumN * sumN);
        }

        cout << res << endl;
    }

    return 0;
}