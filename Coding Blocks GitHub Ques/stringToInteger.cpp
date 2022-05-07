// #include<bits/stdc++.h>
// using namespace std;

// int stringToInteger(string str, int length, int counter) {
//     // BASE CASE
//     if(length == 0) {
//         return 0;
//     }
//     // RECURSIVE CASE
//     int num = str[length - 1] - 48;
//     int mul = pow(10, counter);
//     int sum = (num * mul) + stringToInteger(str, length - 1, counter + 1);
//     return sum;
// }

// int stringToInt(string str, int length) {
//     // BASE CASE
//     if(length == 0) {
//         return 0;
//     }
//     // RECURSIVE CASE
//     int digit = str[length-1] - 48;
//     return stringToInt(str, length - 1)*10 + digit;
// }

// int main() {
//     string str;
//     cin >> str;
//     cout << stringToInteger(str, str.length(), 0);
//     cout << stringToInt(str, str.length());
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int stringToInt(string str, int length) {
    // BASE CASE
    if(length == 0) {
        return 0;
    }
    // RECURSIVE CASE
    int digit = str[length] - '0';
    int sum = stringToInt(str, length - 1) * 10 + digit;
    return sum;
}

int stringToInteger(string str, int length, int counter) {
    // BASE CASE
    if(length == 0) {
        return 0;
    }
    // RECURSIVE CASE
    int digit = str[length - 1];
    int mul = pow(10, counter);
    int sum = digit*mul + stringToInteger(str, length, counter + 1);
    return sum;
}

int main() {
    string str;
    cin >> str;
    
}