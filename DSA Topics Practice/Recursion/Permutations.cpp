#include<bits/stdc++.h>
using namespace std;

void permute(string str, int i) {
    // BASE CASE
    if(i == str.length()) {
        cout << str << " ";
        return;
    }
    // RECURSIVE CASE
    for(int k = i; k < str.length(); k++) {
        swap(str[i], str[k]);
        permute(str, i + 1);
        swap(str[i], str[k]);
    }
}

void permuteSTL(string str) {
    cout << str << " ";
    while(next_permutation(str.begin(), str.end())) {
        cout << str << " ";
    }
    cout << endl;
}

void permute(string str, set<string> &setString, int i){
    // BASE CASE
    if(i == str.length()) {
        setString.insert(str);
        return;
    }
    // RECURSIVE CASE
    for(int k = i; k < str.length(); k++) {
        swap(str[i], str[k]);
        permute(str, setString, i + 1);
        swap(str[i], str[k]);
    }
}

int main() {
    string str;
    set<string> setStr;
    cin >> str;
    permute(str, 0);
    cout << endl;
    permuteSTL(str);
    permute(str, setStr, 0);
    for(auto it: setStr) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}