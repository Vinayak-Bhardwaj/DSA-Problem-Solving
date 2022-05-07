#include<bits/stdc++.h>
using namespace std;

int countBits(int num) {
    int count = 0;
    while(num != 0) {
        int res = num & 1;
        if(res)
            count++;
        num = num >> 1;
    }
    return count;
}

int main() {
    int num;
    cin >> num;
    cout << countBits(num);
    return 0;
}