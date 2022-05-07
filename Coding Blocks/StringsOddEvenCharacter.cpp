#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    for(int i = 0; str[i] != NULL; i++) {
        if(i % 2 == 0) {
            str[i]++;
        }
        else {
            str[i]--;
        }
    }
    cout << str;
    return 0;
}