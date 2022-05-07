// #include<bits/stdc++.h>
// using namespace std;

// int fact(int num) {
//     //BASE CASE
//     if(num == 0) {                          // Fir uss problem ka jimma jo recursion par chora hai uska end point ka solution socho kya hoga wo aapka base case hoga
//         return 1;
//     }
//     //RECURSIVE CASE
//     int ans = num * fact(num-1);            // First write the recursive case only always ki problem kitni aasan problem me brake kari jaa sakti hai
//     return ans;                             // bas jo answer nikala hai usse return kardo
// }

// int main() {
//     int num;
//     cin >> num;
//     cout << fact(num);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int fact(int n) {
    // BASE CASE
    if(n == 0) {
        return 1;
    }
    // RECURSIVE CASE
    int ans = n * fact(n - 1);
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}