#include<bits/stdc++.h>
using namespace std;

void printLexico(string str[], int i, int n) {
    // BASE CASE
    if(i == n + 1) {
        return;
    }
    // RECURSIVE CASE
    string ch = to_string(i);

    if(i > 0 && ch < str[i - 1]) {
        int j = i - 1;
        while(j >= 0 && ch < str[j]) {
            str[j + 1] = str[j];
            j--;
        }
        str[j + 1] = ch;
    }
    else {
        str[i] = ch;
    }

    printLexico(str, i + 1, n);
}

int main() {
    int n;
    cin >> n;
    string str[1000];
    str[0] = "0";

    printLexico(str, 1, n);

    for(int i = 0; i <= n; i++) {
        cout << str[i] << " ";
    }

    return 0; 
}