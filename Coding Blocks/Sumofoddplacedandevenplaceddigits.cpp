#include<bits/stdc++.h>
using namespace std;
int main() {
    int num, sumo = 0, sume = 0, a = 0;
    cin >> num;
    while(num > 0) {
        int rem = num % 10;
        if(a == 0)
            sumo += rem;
        else
            sume += rem;
        a = 1 - a;
        num /= 10;
    }
    cout << sumo << endl << sume;
    return 0;
}