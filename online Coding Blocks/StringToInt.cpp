#include<bits/stdc++.h>
using namespace std;

int stringToInt1(string str, int i) {
    // BASE CASE
    if(i == str.length()) {
        return 0;
    }
    // RECURSIVE CASE
    int num = str[i] - '0';
    int sum = num*pow(10,str.length() - i - 1) + stringToInt1(str, i + 1);
    return sum;
}

int stringToInt2(string str, int n) {
    // BASE CASE
    if(n < 0) {
        return 0;
    }
    // RECURSIVE CASE
    int num = str[n] - '0';
    int sum = stringToInt2(str, n - 1)*10 + num;
    return sum;
}

int main() {
    string str = "12345";
    cout << stringToInt2(str, str.length() - 1);
    return 0;
}