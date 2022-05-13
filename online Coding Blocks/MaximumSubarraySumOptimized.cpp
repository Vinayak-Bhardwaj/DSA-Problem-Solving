#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[1000], csum[1000] = {0}, size;
    int maxSum = INT_MIN;
    int wi, wj;

    cin >> size;
    
    // Inputting the array
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Calculating the csum array
    for(int i = 1; i < size; i++) {
        csum[i] = csum[i - 1] + arr[i];
    }

    // Printing the csum array
    for(int i = 0; i < size; i++) {
        cout << csum[i] << " ";
    }
    cout << endl;

    // Caluclating and Printing the maximum sub array
    for(int i = 0; i < size; i++) {
        for(int j = i; j < size; j++) {
            int sum = 0;
            sum = csum[j] - csum[i - 1];
            if(sum > maxSum) {
                maxSum = sum;
                wi = i;
                wj = j;
            }
        }
    }

    cout << "Maximum Sum is : " << maxSum << endl;
    
    cout << "Maximum Sum Subarray is : ";

    for(int i = wi; i <= wj; i++) {
        cout << arr[i] << " ";
    }

    return 0;

}