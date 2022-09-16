#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
    return a < b;
}

void store(string &str, int dig) {
    // BASE CASE
    if(dig == 0) {
        return;
    }
    // RECURSIVE CASE
    store(str, dig/10);
    int rem = dig % 10;
    str.push_back(rem + '0');
}

int main() {
    int n;
    cin >> n;
    string str[n + 1];

    for(int i = 0; i <= n; i++) {
        if(i <= 9) {
            str[i].push_back(i + '0');
        }
        else {
            store(str[i], i);
        }
    }

    sort(str, str + n + 1, compare);

    for(auto it: str) {
        cout << it << " ";
    }
    return 0;
}