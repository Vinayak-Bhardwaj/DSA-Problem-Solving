#include<bits/stdc++.h>
using namespace std;

void assignment(int n, string out) {
    // BASE CASE
    if(out.length() == n) {
        cout << out << " ";
        return;
    }
    // RECURSIVE CASE

    //1. Ek baar a daalo
    out.push_back('a');
    assignment(n, out);
    out.pop_back();

    //2. Ek baar b daalo
    if(out.back() != 'b' || out.empty()) {
        out.push_back('b');
        assignment(n, out);
        out.pop_back();
    }
}

int main() {
    int n;
    cin >> n;
    string out;
    
    assignment(n, out);

    return 0;
}