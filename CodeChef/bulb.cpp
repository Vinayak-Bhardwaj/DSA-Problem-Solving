#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while(test--) {
        int n;
        cin >> n;
        //int arr1[n], arr2[n];
        // for(int i = 0; i < n; i++) {
        //     cin >> arr1[i];
        // }

        // for(int i = 0; i < n; i++) {
        //     cin >> arr2[i];
        // }

        string str1, str2;
        cin >> str1 >> str2;

        int diff = 0;
        for(int i = 0; i < str1.length(); i++) {
            if(str1[i] != str2[i]) {
                cout << str1[i] << " " << str2[i] << endl;
                diff++;
            }
        }

        cout << diff << endl;

        if(diff % 2 == 0) {
            cout << "1" << endl;
        }
        else {
            cout << "0" << endl;
        }
    }
    return 0;
}