// // To unset a particular bit
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n, bit;
//     cin >> n >> bit;

//     // First create a desirable mask
//     int mask = 1;
//     mask = mask << bit;
//     mask = ~mask;

//     int ans = n & mask;

//     cout << ans;
//     return 0;
// }



// // To set or unset a particular bit
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n, bitpos, bit;
//     cin >> n >> bitpos >> bit;

//     //1. To clear the bit
//     int mask = 1;
//     mask = mask << bitpos;
//     mask = ~mask;
//     n = n & mask;

//     //2. To set the bit
//     mask = bit << bitpos;
//     n = n | mask;

//     cout << n;
//     return 0;
// }



// // To check the value of a particular bit
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n, bit;
//     cin >> n >> bit;
//     int mask = 1 << bit;

//     int ans = n & mask;

//     if(ans) {
//         cout << "1";
//     }
//     else {
//         cout << "0";
//     }
    
//     return 0;
// }



// Count set bits: this we know


// // Clear bits ranges
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n, bits;
//     cin >> n >> bits;

//     int mask = 0;
//     mask = ~mask;

//     mask = mask << bits;

//     int ans = n & mask;

//     cout << ans;

//     return 0;
// }



// // Clear bit range from i to j
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n, i, j;
//     cin >> n >> i >> j;

//     int mask = 0;
//     mask = ~mask;
//     mask = mask << j;

//     cout << "Mask1: " << mask << endl;

//     int mask2 = 1 << i;
//     mask2 = mask2 - 1;          //(its 2^i - 1)
    
//     cout << "Mask2: " << mask2 << endl;

//     mask = mask | mask2;

//     cout << "Mask: " << mask << endl;

//     int ans = n & mask;

//     cout << ans;

//     return 0;
// }



// // Update bits in N by M
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n, m, i, j;
//     cin >> n >> m >> i >> j;

//     //1. Modify M by left shift
//     m = m << (i-1);

//     //2. Clear bits in N from i, j
//     int mask = 0;
//     mask = ~mask;
//     mask = mask << j;

//     int mask2 = 1 << i;
//     mask2 = mask2 -1;

//     mask = mask | mask2;

//     n = n & mask;

//     n = n | m;

//     cout << n;

//     return 0;
// }



// // Decimal To Binary Conversion
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int num;
//     string str;
//     cin >> num;
//     while(num > 0) {
//         int res = num & 1;
//         char ch = '0' + res;
//         str.push_back(ch);
//         num = num >> 1;
//     }
//     reverse(str.begin(), str.end());
//     cout << str;
//     return 0;
// }