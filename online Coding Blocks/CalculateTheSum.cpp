#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n], arr2[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }    
    int  operations,sum = 0;
    cin >> operations;
    for(int j = 0; j < operations; j++) {
        int x;
        cin >> x;
        for(int i = 0; i < n; i++) {
            int num1 = arr[i];
            int index = i - x;
            while(index < 0) {
                index = n + index;
            }
            int num2 = arr[index];
            arr2[i] = num1 + num2;
        }

        for(int i = 0; i < n; i++) {
            arr[i] = arr2[i];
            //cout << arr2[i] << " ";
        }

        //cout << endl;

    }

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int mod = pow(10, 9) + 7;
    int result = sum % mod; 
    cout << result;

    return 0;
}