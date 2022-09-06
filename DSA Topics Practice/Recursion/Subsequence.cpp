#include<bits/stdc++.h>
using namespace std;

void subsequences(string in, string out, int i, int j) {
    // BASE CASE
    if(i == in.length()) {
        cout << out << endl;
        return;
    }
    // RECURSIVE CASE
    subsequences(in, out, i + 1, j);
    out.push_back(in[i]);
    subsequences(in, out, i + 1, j + 1);
    //out.pop_back();
}

int main() {
    string in, out;
    cin >> in;
    subsequences(in, out, 0, 0);
    return 0;
}