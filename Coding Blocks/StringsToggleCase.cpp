#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for(int i = 0; s[i] != NULL; i++) {
        if(islower(s[i])) {
            s[i] = toupper(s[i]);
        }
        else if(isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
    return 0;
}