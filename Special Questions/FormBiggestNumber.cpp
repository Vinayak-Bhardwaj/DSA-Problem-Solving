#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
    return (a+b) > (b+a);
}

// bool comparator(string a, string b) {
//     string one = a + b;
//     string two = b + a;

//     int i = 0;
//     while(one[i] && two[i]) {
//         if(one[i] > two[i]) {
//             return true;
//         }
//         else if(one[i] < two[i]){
//             return false;
//         }
//         ++i;
//     }

//     return false;
// }

int main() {
    int n;
    vector<string> arr;
    string temp;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end(), compare);

    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }

    return 0;
}