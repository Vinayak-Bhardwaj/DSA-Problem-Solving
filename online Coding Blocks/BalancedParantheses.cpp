#include<bits/stdc++.h>
using namespace std;

void balanced(char str[], int i, int open, int close, int n) {
    // BASE CASE
    if(i == 2*n) {
        str[i] = '\0';
        cout << str << endl;
        return;
    }
    // RECURSIVE CASE
    if(open < n) {
        str[i] = '(';
        balanced(str, i + 1, open + 1, close, n);
    }
    if(open > close) {
        str[i] = ')';
        balanced(str, i + 1, open, close + 1, n);
    }
}

int main() {
    int n, open = 0, close = 0;
    char str[1000];
    cin >> n;

    balanced(str, 0, open, close, n);

    return 0;
}