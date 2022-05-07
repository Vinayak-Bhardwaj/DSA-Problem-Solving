#include<bits/stdc++.h>
using namespace std;

bool isPallin(string str) {
    for(int i = 0; str[i] != NULL; i++) {
        if(str[i] != str[str.length() - i - 1])
            return false;
    }
    return true;
}

int main() {
    string str;
    cin >> str;
    cout << (isPallin(str) ? "true" : "false");
    return 0;
}