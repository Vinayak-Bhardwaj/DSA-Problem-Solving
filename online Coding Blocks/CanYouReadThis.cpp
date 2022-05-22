#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++) {
        cout << str[i];
        if((i + 1) < str.length()) {
            if(str[i+1] >= 'A' && str[i+1] <= 'Z') {
                cout << endl;
            }
        }
    }
    return 0;
}