// #include<bits/stdc++.h>
// using namespace std;

// void printNToZero(int n) {
//     //BASE CASE
//     if(n == 0) {
//         return;
//     }
//     //RECURSIVE CASE
//     cout << n << " ";
//     printNToZero(n-1);
// }

// int main() {
//     int n;
//     cin >> n;
//     printNToZero(n);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

void printNToZero(int n) {
    // BASE CASE
    if(n < 0) {
        return;
    }
    // RECURSIVE CASE
    cout << n << endl;
    printNToZero(n - 1);
}

int main() {
    int n;
    cin >> n;
    printNToZero(n);
    return 0;
}