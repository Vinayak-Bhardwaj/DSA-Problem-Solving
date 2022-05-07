#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli T;
    cin >> T;
    while(T--) {
        lli n;
        cin >> n;
        char ch[n];
        cin.ignore();
        cin >> ch;
        string str = ch;
        cout << str;
        sort(ch, ch + n);
        cout << endl;
        cout << str;
        cout << endl;
    }
    return 0;
}