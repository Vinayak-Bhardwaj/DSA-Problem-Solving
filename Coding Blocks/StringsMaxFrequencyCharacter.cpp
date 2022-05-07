#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[1000] = {0}, max = INT_MIN, maxChar;
    string str;
    cin >> str;
    for(int i = 0; str[i] != NULL; i++) {
        arr[int(str[i])]++;
    }
    for(int i = 65; i <= 122; i++) {
        if(arr[i] > max) {
            maxChar = i;
            max = arr[i];
        }
    }
    // for(int i = 65; i <= 122; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // cout << maxChar;
    cout << char(maxChar);
    return 0;
}