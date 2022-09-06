// #include<bits/stdc++.h>
// using namespace std;

// int maxTempAgg(int* arr, int n) {
//     if(n == 1) {
//         return arr[0];
//     }

//     int left = arr[0];
//     int right = 0;
//     for(int i = 0; i < n; i++) {
//         right += arr[i];
//     }

//     int temNow = max(left, right);
//     int maxTempChange = temNow;

//     for(int i = 1; i < n; i++) {
//         left = left + arr[i];
//         right = right - arr[i-1];
//         temNow = max(left, right);
//         if(temNow > maxTempChange) {
//             maxTempChange = temNow;
//         }
//     }

//     return maxTempChange;
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << maxTempAgg(arr, n);

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int getGroupsCount(vector<int> awards, int k) {
    sort(awards.begin(), awards.end());
    int n = awards.size();
    if(n == 0)
        return 0;
    
    int groupCount = 1, groupStart = awards[0];

    for(int i = 1; i < n; i++) {
        if(awards[i] - groupStart > k) {
            groupCount++;
            groupStart = awards[i];
        }
    }

    return groupCount;
}

int main() {
    cout << getGroupsCount({1, 13, 6, 8, 9, 3, 5}, 4);

    return 0;
}