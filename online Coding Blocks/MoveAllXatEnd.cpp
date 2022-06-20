#include<bits/stdc++.h>
using namespace std;

void moveAllX(string &str, int i) {
    // BASE CASE
    if(str[i] == '\0') {
        cout << str << endl;
        return;
    }
    // RECURSIVE CASE
    // 1. Find X and shift all char from last one step behind
    if(str[i] == 'x') {
        int j = i;
        while(str[j + 1] != '\0') {
            str[j] = str[j + 1];
            j++;
        }
        str[j] = 'x';
    }
    moveAllX(str, i + 1);
}

int main() {
    string str;
    cin >> str;
    moveAllX(str, 0);
    return 0;
}



// axbxc
// abbxc
// abxxc
// abxcc
// abxcx
