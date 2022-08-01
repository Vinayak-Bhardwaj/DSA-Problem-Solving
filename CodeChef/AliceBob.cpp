#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli test;
    cin >> test;
    while(test--) {
        lli alice, bob, num;
        cin >> alice >> bob >> num;

        lli mul = bob * alice;

        if(alice == bob) {
            cout << "-1" << endl;
        }
        else if(bob == 1) {
            cout << "-1" << endl;
        }
        else if(alice % bob == 0) {
            cout << "-1" << endl;
        }
        else {
            if(alice > num) {
                num = alice;
            }
            if(num % alice != 0) {
                lli rem = num % alice;
                num = num - rem;
                num = num + alice;
            }
            if(num % bob == 0) {
                num = num + alice;
            }
            cout << num << endl;
        }
    }
    return 0;
}