#include<bits/stdc++.h>
using namespace std;

char* rotateString(char* str, int n) {
    
    //1. Shift all chars +n position
    int len = strlen(str);
    int i = len - 1;
    while(i >= 0) {
        str[i + n] = str[i];
        i--;
    }

    // cout << str;

    //2. Copy last n chars to first n
    int j = len;
    i = 0;
    while(i < n) {
        str[i] = str[j];
        i++;
        j++;
    }

    str[len] = '\0';

    return str;
}

int main() {
    char str[1000];
    int n;
    cin >> str;
    cin >> n;
    cout << rotateString(str, n);
    return 0;
}