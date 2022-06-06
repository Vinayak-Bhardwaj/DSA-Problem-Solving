#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
    
    // Check prefix or not
    if(a.find(b) == 0 || b.find(a) == 0) {          // if either of them is prefix of another then we'll get 0, because this func returns the index where one string is present in another so if returned 0 it means that whole string is present in another
        return a.length() > b.length();             // so if present then it means prefix so return which has greater length
    }

    // else check lexicographically
    return a < b;
}

int main() {
    int n;
    cin >> n;
    string str[1005];
    
    cin.ignore();
    
    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }

    sort(str, str + n, compare);

    for(int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }

    return 0;
}