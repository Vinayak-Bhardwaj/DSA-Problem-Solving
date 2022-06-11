#include<bits/stdc++.h>
using namespace std;

void decToBin(int num) {
    int mask = 1 << 30;
    bool isOneFound = false;
    while(mask != 0) {
        int res = num & mask;
        if(res == 0 && isOneFound == false) {
            mask = mask >> 1;
        }
        else {
            isOneFound = true;
            if(res > 0) {
                cout << 1;
            }
            else {
                cout << 0;
            }
            mask = mask >> 1;
        }
    }
}

int main() {
    int num;
    cin >> num;
    decToBin(num);
    return 0;
}