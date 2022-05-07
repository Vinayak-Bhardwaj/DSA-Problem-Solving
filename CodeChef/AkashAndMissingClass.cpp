#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while(T--) {
        int days, leaves = 0;
        cin >> days;
        // for(int i = 1; i <= days; i++) {
        //     if(i % 7 == 6) {
        //         leaves++;
        //     }
        // }
        leaves = leaves + (days/7);
        days = days % 7;
        if(days == 6) {
            leaves++;
        }
        cout << leaves << endl;
    }
    return 0;
}