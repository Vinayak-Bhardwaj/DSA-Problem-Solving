#include<bits/stdc++.h>
using namespace std;

vector<string> store;

void codesOfStrings(string in, string out, int i, int j) {
    // BASE CASE
    if(i == in.length()) {
        store.push_back(out);
        return;
    }
    // RECURSIVE CASE

    //1. Store 1 char
    char ch = in[i] - '0' + 96;
    out.push_back(ch);
    codesOfStrings(in, out, i + 1, j);
    out.pop_back();

    //2. Store 2 char
    if((i + 1) < in.length()) {
        int dig = (in[i] - '0')*10 + (in[i + 1] - '0');
        if(dig <= 26) {
            ch = dig + 96;
            out.push_back(ch);
            codesOfStrings(in, out, i + 2, j);
            out.pop_back();
        }
    }
}

int main() {
    string str, out;
    cin >> str;
    codesOfStrings(str, out, 0, 0);

    // Print out
    cout << "[";
    for(auto it = store.begin(); it < store.end() - 1; it++) {
        cout << *it << ", ";
    }

    auto var = store.end() - 1;

    cout << *var << "]";

    return 0;
}