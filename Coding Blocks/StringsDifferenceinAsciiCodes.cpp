#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    for(int i = 0; str[i] != NULL; i++) {
        cout << str[i];
        if(str[i+1] != NULL) {
            cout << (int(str[i+1]) - int(str[i]));
        }
    }
    return 0;
}