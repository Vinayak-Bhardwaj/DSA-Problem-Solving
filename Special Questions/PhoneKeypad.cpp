#include<bits/stdc++.h>
using namespace std;

string keys[] = { " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wx", "yz"};

void phoneKeypad(char* in, char* out, int i, int j) {
    // BASE CASE
    if(in[i] == '\0') {
        out[j] = '\0';
        cout << out << " ";
        return;
    }
    // RECURSIVE CASE
    int dig = in[i] - '0';
    for(int k = 0; keys[dig][k] != '\0'; k++) {
        out[j] = keys[dig][k];
        phoneKeypad(in, out, i + 1, j + 1);
    }
}

int main() {
    char in[1000], out[1000];
    cin >> in;
    phoneKeypad(in, out, 0, 0);
    return 0;
}