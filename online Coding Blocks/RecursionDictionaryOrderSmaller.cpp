#include<bits/stdc++.h>
using namespace std;

void dictSmaller(string str, int i, string original, vector<string> &vec) {
    // BASE CASE
    if(str[i] == '\0') {
        if(str < original) {
            vec.push_back(str);
        }
        return;
    }
    // RECURSIVE CASE
    for(int k = i; k < str.length(); k++) {
        swap(str[i], str[k]);
        dictSmaller(str, i + 1, original, vec);
        swap(str[i], str[k]);
    }
}

int main() {
    string str, original;
    vector<string> vec;
    cin >> str;
    original = str;
    dictSmaller(str, 0, original, vec);
    
    sort(vec.begin(), vec.end());

    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
    return 0;
}