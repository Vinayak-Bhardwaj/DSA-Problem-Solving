#include<bits/stdc++.h>
using namespace std;

void replacePi(char* str, int i) {
    // BASE CASE
    if(str[i] == '\0' || str[i + 1] == '\0') {
        return;
    }
    // RECURSIVE CASE
    if(str[i] == 'p' && str[i + 1] == 'i') {
        int j = i + 2;
        while(str[j] != '\0') {
            j++;
        }
        while(j >= i + 2) {
            str[j + 2] = str[j];
            j--;
        }
        str[i] = '3';
        str[i + 1] = '.';
        str[i + 2] = '1';
        str[i + 3] = '4';
        replacePi(str, i + 4);
    }
    else {
        replacePi(str, i + 1);
    }
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while(T--) {
        char str[1000];
        cin >> str;
        replacePi(str, 0);
        cout << str << endl;
    }
    return 0;
}