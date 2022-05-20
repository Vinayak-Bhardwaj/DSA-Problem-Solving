#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;

    for(int i = 0; i < str.length();) {
        char ch = str[i];
        int count = 0;
        //cout << str[i]  << " " << "i : " << i << " ";
        while(str[i++] == ch) {
            count++;
        }
        i--;
        //cout << "to i : " << i << " count : " <<count << endl;
        cout << count;
    }
    return 0;
}