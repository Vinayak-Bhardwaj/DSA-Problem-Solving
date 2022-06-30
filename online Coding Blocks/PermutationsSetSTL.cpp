#include<bits/stdc++.h>
using namespace std;

void permutations(string str, int i, set<string> &s) {
    // BASE CASE
    if(str[i] == '\0') {
        s.insert(str);
        //cout << str << endl;
        return;
    }
    // RECURSIVE CASE
    for(int k = i; str[k] != '\0'; k++) {
        swap(str[i], str[k]);
        permutations(str, i + 1, s);
        swap(str[i], str[k]);
    }
}

int main() {
    string str;
    set<string> s;
    cin >> str;
    permutations(str, 0, s);

    for(auto str: s) {
        cout << str << ", ";
    }
    return 0;
}