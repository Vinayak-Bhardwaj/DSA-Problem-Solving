#include<bits/stdc++.h>
using namespace std;

void decToBin(int num) {
    string s;
    while(num > 0) {
        if(num % 2 == 0) {
            s.push_back('0');
        }
        else { 
            s.push_back('1');
        }
        num = num / 2;
    }
    reverse(s.begin(), s.end());
    cout << s;
}

int main() {
    int num;
    cin >> num;
    decToBin(num);
    return 0;
}