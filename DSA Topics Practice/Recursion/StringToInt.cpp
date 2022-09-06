#include<bits/stdc++.h>
using namespace std;

int stringToInt(string str, int i) {
    // BASE CASE
    if(i == str.length()) {
        return 0;
    }
    // RECURSIVE CASE
    int dig = str[str.length() - i - 1] - '0';
    int sum = stringToInt(str, i + 1)*10 + dig;
    return sum;
}

int main() {
    string str;
    cin >> str;
    cout << stringToInt(str, 0);
    return 0;
}