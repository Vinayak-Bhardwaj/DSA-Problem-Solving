#include<bits/stdc++.h>
using namespace std;

void printZeroToN(int index, int n) {
    // BASE CASE
    if(index > n) {
        return;
    }
    //RECURSIVE CASE
    cout << index << " ";
    printZeroToN(index + 1, n);
}

void printZeroToNAnother(int n) {
    // BASE CASE
    if(n == 0) {
        return;
    }
    //RECURSIVE CASE
    printZeroToNAnother(n-1);
    cout << n;
}

int main() {
    int n;
    cin >> n;
    printZeroToN(0, n);
    printZeroToNAnother(n);
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// void printZeroToN1(int n) {
//     // BASE CASE
//     if(n < 0) {
//         return;
//     }
//     // RECURSIVE CASE
//     printZeroToN1(n - 1);
//     cout << n << endl;
// }

// void printZeroToN2(int n, int index) {
//     // BASE CASE
//     if(index == n + 1) {
//         return;
//     }
//     //RECURSIVE CASE
//     cout << index << endl;
//     printZeroToN2(n, index + 1);

// }

// int main() {
//     int n;
//     cin >> n;
//     printZeroToN1(n);
//     printZeroToN2(n, 0);
//     return 0;
// }