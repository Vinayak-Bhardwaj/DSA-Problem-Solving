#include<bits/stdc++.h>
using namespace std;

void content(string str, int i, int open, int close) {
    // BASE CASE
    if(str[i] == ')' || str[i] == '\0') {
        return;
    }

    // RECURSIVE CASE
    if(str[i] == '(') {
        content(str, i + 1, open + 1, close);
    }
    if(open > close) {
        cout << str[i];
    }
    content(str, i + 1, open, close);
}

int main() {
    string str;
    cin >> str;

    content(str, 0, 0, 0);

    return 0;
}