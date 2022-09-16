#include<bits/stdc++.h>
using namespace std;

void balanced(int n, string str, int open, int close) {
    // BASE CASE
    if(str.length() == (2*n)) {
        cout << str << endl;
        return;
    }
    // RECURSIVE CASE
    if(open < n) {
        str.push_back('(');
        balanced(n, str, open + 1, close);
        str.pop_back();
    }
    if(open > close) {
        str.push_back(')');
        balanced(n, str, open, close + 1);
        str.pop_back();
    }
    
}

int main() {
    int n;
    cin >> n;
    string show;
    balanced(n, show, 0, 0);
    return 0;
}