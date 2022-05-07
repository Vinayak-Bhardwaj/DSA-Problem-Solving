// #include<iostream>
// #include<math.h>
// using namespace std;
// #define lli long long int

// bool Amstrong(lli num) {
//     lli sum = 0;
//     lli compare = num;
//     lli length = to_string(num).length();
//     while(num) {
//         sum = sum + pow((num % 10),length);
//         num /= 10;
//     }
//     if(compare == sum) {
//         return true;
//     }
//     return false;
// }

// int main() {
//     lli range1, range2;
//     cin>>range1>>range2;
//     for(int i = range1; i <= range2; i++) {
//         if(Amstrong(i)) {
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define lli long long int

bool isArmStrong(lli num) {
    lli compare = num, sum = 0;
    lli length = to_string(num).length();
    while(num > 0) {
        lli rem = num % 10;
        sum = sum + pow(rem, length);
        num /= 10;
    }
    if(sum == compare)
        return true;
    return false;
}

int main() {
    lli n1, n2;
    cin >> n1 >> n2;
    for(lli i = n1; i <= n2; i++) {
        if(isArmStrong(i))
            cout << i << endl;
    }
    return 0;
}