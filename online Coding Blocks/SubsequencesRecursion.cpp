#include<bits/stdc++.h>
using namespace std;

void subsequences(char in[], char out[], int i, int j) {
    // BASE CASE
    if(in[i] == '\0') {
        out[j] = '\0';
        cout << out << endl;
        return;
    }
    // RECURSIVE CASE
    // 1. First ignore the character
    subsequences(in, out, i + 1, j);

    // 2. Then store the character and then move to another character
    out[j] = in[i];
    subsequences(in, out, i + 1, j + 1);
}

int main() {
    char in[1000], out[1000];
    cin >> in;
    subsequences(in, out, 0, 0);
    return 0;
}