#include<bits/stdc++.h>
using namespace std;

void store(string &out, int dig) {
    // BASE CASE
    if(dig == 0) {
        return;
    }
    // RECURSIVE CASE
    store(out, dig / 10);
    out.push_back((dig%10) + '0');
}


void ASCIISubsequence(string str, string out, int i, int j) {
    // BASE CASE
    if(i == str.length()) {
        cout << out << endl;
        return;
    }
    // RECURSIVE CASE

    //Store Nothing
    ASCIISubsequence(str, out, i + 1, j);
    
    // Store the char
    out.push_back(str[i]);
    ASCIISubsequence(str, out, i + 1, j + 1);
    out.pop_back();

    // Store the number
    int dig = str[i];
    //string asd = to_string(dig);
    //out.push_back(asd);
    store(out, dig);
    ASCIISubsequence(str, out, i + 1, j + 1);
    out.pop_back();
}

int main() {
    string str, out;
    cin >> str;
    ASCIISubsequence(str, out, 0, 0);
    return 0;
}