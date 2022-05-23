#include<bits/stdc++.h>
using namespace std;

bool compare1(string s1, string s2) {
    return s1 > s2;
}

bool compare2(string s1, string s2) {
    if(s1.length() == s2.length()) {
        return s1 < s2;
    }
    return s1.length() > s2.length();
}

int main() {
    int n;
    cin >> n;

    //Important
    cin.ignore();

    string str[1000];
    for(int i = 0; i < n; i++) {
        getline(cin, str[i]);
    }

    sort(str, str + n, compare2);

    for(int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }

    return 0;
}