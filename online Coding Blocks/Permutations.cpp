#include<bits/stdc++.h>
using namespace std;

void permute(string str, int i) {
    // BASE CASE
    
    if(str[i] == '\0') {
        cout << str << " ";
        return;
    }

    // RECURSIVE CASE

    // run a loop from j = i to j != null and swap every ith and jth element and rest give it to recursion but after recursion result don't forget to backtrack
    for(int j = i; str[j] != '\0'; j++) {
        swap(str[i], str[j]);
        permute(str, i + 1);
        swap(str[i], str[j]);
    }
}

int main() {
    string str;
    cin >> str;
    permute(str, 0);
    return 0;
}