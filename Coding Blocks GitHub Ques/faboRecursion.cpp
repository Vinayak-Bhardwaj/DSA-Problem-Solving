// #include<bits/stdc++.h>
// using namespace std;

// int fabo(int n) {       
//     //BASE CASE                                         // then write the base case ki what is the termination of our simpler problem 
//     if(n == 0) {                                        // simplest we know that if n==0 i.e first fabo num is 0 and 1st fabo is 1 that's it
//         return 0;
//     }
//     if(n == 1) {
//         return 1;
//     }
//     //RECURSIVE CASE                                    // Firstly write the recursive case only
//     int ans = fabo(n-1) + fabo(n-2);                    // simpler problem will be this only ki I can tell fabo of n if someone tells me the fabo of n-1 + fabo of n-2
//     return ans;
// }

// int main() {
//     int n;
//     cin >> n;
//     cout << fabo(n);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int fabo(int n) {
    // BASE CASE
    if(n == 0 || n == 1) {
        return n;
    }
    // RETURN CASE
    int ans = fabo(n - 1) + fabo(n - 2);
    return ans;
}

int main() {
    int n;
    cin >> n; 
    cout << fabo(n);
    return 0;
}