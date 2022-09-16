#include<bits/stdc++.h>
using namespace std;

char* replacePi(char* str, int i) {
    
    //BASE CASE
    if(str[i] == '\0' || str[i+1] == '\0') {
        return str;
    }
    // RECURSIVE CASE
    if(str[i] == 'p' && str[i+1] == 'i') {
        int j = i + 2;
        while(str[j] != '\0') {
            j++;
        }

        while(j >= i+2) {
            str[j + 2] = str[j];
            j--;
        }

        str[i] = '3';
        str[i+1] = '.';
        str[i+2] = '1';
        str[i+3] = '4';
        return replacePi(str, i+4);
    }
    
    return replacePi(str, i + 1);
}

int main() {
    char str[100];
    cin >> str;
    cout << replacePi(str, 0);
    return 0;
}