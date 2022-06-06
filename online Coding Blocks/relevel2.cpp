#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli n, x;
    cin >> n >> x;
    lli a = 1, b = 0;
    lli count = 0;

    while(a < n || b < n) {
        lli rem = n - a;
        if(rem >= 0) {
            a = a + 3;
            a--;
            count++;
            // cout << "Operation 1 " << count <<  endl; 
        }
        if(rem < 0) {
            b = b + 1;
            a = a - x;
            count++;
            // cout << "Operation 2 " << count <<  endl; 
        }
    }
    cout << count;
    return 0;
}