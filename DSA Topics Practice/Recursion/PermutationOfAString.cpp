#include<bits/stdc++.h>
using namespace std;

void permutation(string str, set<string> &setStr, int i) {
    // BASE CASE
    if(i == str.length()) {
        //cout << str << endl;
        setStr.insert(str);
        return;
    }
    // RECURSIVE CASE
    for(int j = i; j < str.length(); j++) {
        swap(str[i], str[j]);
        permutation(str, setStr, i + 1);
        swap(str[i], str[j]);
    }
}

int main() {
    string str;
    set<string> setStr;
    cin >> str;
    permutation(str, setStr, 0);

    for(auto i: setStr) {
        cout << i << endl;
    }
    return 0;
}