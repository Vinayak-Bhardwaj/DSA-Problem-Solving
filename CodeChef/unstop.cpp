#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    int k, count = 0;

    cin >> str;
    cin >> k;
    sort(str.begin(), str.end());
    
    char ch = str[k];

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ch) {
            count++;
        }
    }

    cout << ch << endl << count << endl;

    return 0;
}