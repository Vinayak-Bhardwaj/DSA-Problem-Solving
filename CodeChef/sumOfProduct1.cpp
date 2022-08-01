// // #include<bits/stdc++.h>
// // using namespace std;
// // int main() {
// //     int test;
// //     cin >> test;
// //     while(test--) {
// //         int n;
// //         cin >> n;
// //         int arr[n];
// //         for(int i = 0; i < n; i++) {
// //             cin >> arr[i];
// //         }

// //         // Number of times an element appears in subarray = (n-i)(i+1)
// //         int sum = 0;

// //         for(int i = 0; i < n; i++) {
// //             int pro = 1;
// //             for(int j = i; j < n; j++) {
// //                 pro = pro * arr[j];
// //                 sum += pro;
// //             }
// //         }
// //         cout << sum << endl;
// //     }
// //     return 0;
// // }


// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int test;
//     cin >> test;
//     while(test--) {
//         int n;
//         cin >> n;
//         int arr[n];
//         for(int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         int res = 0;

//         for(int j = 0; j < n; j++) {
//             // // 1. 1digit
//             // for(int i = 0; i < n; i++) {
//             //     res = res + arr[i];
//             // }

//             // //2. 2 digit
//             // for(int i = 0; i < n - 1; i++) {
//             //     int pro = arr[i] * arr[i+1];
//             //     res = res + pro;
//             // }

//             // //3. 3 digit
//             // for(int i = 0; i < n - 2; i++) {
//             //     int pro = arr[i] * arr[i + 1] * arr[i + 2];
//             //     res = res + pro;
//             // }

//             // //4. 4 digit
//             // for(int i = 0; i < n - 3; i++) {
//             //     int pro = arr[i] * arr[i + 1] * arr[i + 2] * arr[i + 3];
//             //     res = res + pro;
//             // }

//             for(int i = 0; i < n - j; i++) {
                
//             }
//         }

//         cout << res << endl;
//     }

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while(test--) {
        int n;
        cin >> n;
        int arrVin[n];

        int count = 0, sum = 0;

        for(int i = 0; i < n; i++) {
            cin >> arrVin[i];
        }

        for(int i = 0; i < n; i++) {
            if(arrVin[i] == 0) {
                count = 0;
            }
            else {
                count++;
            }
            sum = sum + count;
        }
        cout << sum << endl;
    }
    return 0;
}