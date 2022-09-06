// Find Function
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[] = {1, 3, 5, 6, 8};
//     int n = sizeof(arr) / sizeof(int);

//     int *p = find(arr, arr + n, 6);
//     int index = p-arr;
//     cout << index + 1;

//     string str = "I am learning strings update";

//     //int *m = find(str.begin(), str.end(), "learning");        // Does not work on strings
//     // index =
//     return 0;
// }

// // Binary Search Function
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[] = {1, 3, 5, 6, 8};
//     int n = sizeof(arr) / sizeof(int);
//     int key = 6;

//     bool found = binary_search(arr, arr + n, key);

//     cout << found;
//     return 0;
// }

// // Lower Bound and Upper Bound
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[] = {10, 20, 40, 40, 40, 50};
//     int n = sizeof(arr) / sizeof(int);

//     int* ans = lower_bound(arr, arr + n, 40);
//     cout << ans - arr;

//     cout << endl;

//     int* ans2 = upper_bound(arr, arr + n, 40);
//     cout << ans2 - arr;

//     cout << endl;

//     cout << "Number of times 40 occur = Upper bound - Lower bound: " << ans2 - ans;
//     return 0;
// }

// // Next Permutation
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[] = {1, 2, 3};
//     int n = 3;

//     string str = "ABC";

//     while(next_permutation(arr, arr + n)) {
//         for(int i = 0; i < n; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     cout << endl;

//     while(next_permutation(str.begin(), str.end())) {
//         cout << str << endl;
//     }
//     return 0;
// }

// Pair we know

// // Rotate Function
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int n = 6;

//     rotate(arr, arr + 3, arr + n);

//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }




// // Reverse Function
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int n = 6;

//     reverse(arr, arr + n);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }