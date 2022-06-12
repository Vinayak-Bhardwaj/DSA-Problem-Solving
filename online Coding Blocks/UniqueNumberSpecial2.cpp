#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {6, 5, 1, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    // Step1. To find out the ans
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }

    cout << ans << endl;
    int result = ans;

    // Step2. Extract the bit pos with value 1. that would be mean that it would be different in both the numbers
    int pos = 0;
    while(ans > 0) {
        if((ans & 1) > 0) {
            break;
        }
        pos++;
        ans = ans >> 1;
    }

    cout << pos << endl;

    
    
    //Step3. We need to form the number x
    int x = 1 << pos;
    
    
    
    // Step4. We need to seperate the numbers based on the bit position
    int uniqueNum = 0;
    for(int i = 0; i < n; i++) {
        if((arr[i] & x) == 0) {                                 // Only those numbers will be alowed to enter inside which have result = 0
            uniqueNum = uniqueNum ^ arr[i];                     // So numbers entered are 5, 1, 1 and simultanously only we'll take out xor
        }
    }

    cout << uniqueNum << endl;
    
    int uniqueNum2 = result ^ uniqueNum;                        // we need only 1 set because second unique num can be obtained like this because ans = 6 i.e 5 ^ 3 so if we do ans ^ unique num1 => 5 ^ 3 ^ 5 = 3 so here we get
    cout << uniqueNum2 << endl;

    return 0;
}