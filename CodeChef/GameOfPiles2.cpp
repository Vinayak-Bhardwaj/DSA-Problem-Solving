// // if n is odd and two one so result flip


// #include<bits/stdc++.h>
// using namespace std;
// #define lli long long int

// int main() {
//     lli test;
//     cin >> test;
//     while(test--) {
//         lli n, numOfOdds = 0;
//         cin >> n;
//         if(n > 1) {
//             lli arr[n] = {0};
//             //bool isOne = false;
//             int twoOne = 0;

//             for(lli i = 0; i < n; i++) {
//                 cin >> arr[i];
//                 if(arr[i] % 2 != 0) {
//                     numOfOdds++;
//                 }
//                 if(arr[i] == 1) {
//                     twoOne++;
//                 }
//             }

//             if(numOfOdds % 2 != 0) {
//                 if(n % 2 != 0 && twoOne == 2) {
//                     cout << "CHEFINA" << endl;
//                 }
//                 else {
//                     cout << "CHEF" << endl;
//                 }
//             }
//             else  {
//                 if(n % 2 != 0 && twoOne == 2) {
//                     cout << "CHEF" << endl;
//                 }
//                 else {
//                     cout << "CHEFINA" << endl;
//                 }
//             }
//         }
//         else {
//             cout << "CHEFINA" << endl;
//         }
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    while(testCase--) {
        int num;
        cin >> num;
        int arr[num];
        int p = 0, q = 0, r = 0, s = 0, t = 0;

        for(int i = 0; i < num; i++) {

            cin >> arr[i];
            if(arr[i] == 1) {
                r++;
            }

            else {
                if(arr[i] == 2) {
                    q++;
                }
                s = s + arr[i];
                t++;
                if(arr[i] % 2 != 0) {
                    p++;
                }
            }

        }
        if(r == 1) {

            if(p % 2 == 0) {
                cout << "CHEF" << endl;
                continue;
            }

            if(q == 0) {
                cout << "CHEFINA" << endl;
                continue;
            }

            s = s - 2;
            t--;
            
            if((s - t)%2 != 0) {
                cout << "CHEFINA" << endl;
                continue;
            }

            else {
                cout << "CHEF" << endl;
                continue;
            }

        }
        else if(r > 1) {
            
            if((s-t)%2 != 0) {
                cout << "CHEF" << endl;
                continue;
            }

            else {
                cout << "CHEFINA" << endl;
                continue;
            }

        }

        if(p % 2 != 0) {
            cout << "CHEF" << endl;
            continue;
        }

        else {
            cout << "CHEFINA" << endl;
            continue;
        }
    }
    
    return 0;
}