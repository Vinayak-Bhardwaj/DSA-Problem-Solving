#include<bits/stdc++.h>
using namespace std;

int rainWater(int* arr, int n) {
    int sum = 0;

    for(int i = 0; i < n; i++) {
        int left = 0, leftIndex = i-1;

        while(leftIndex >= 0) {
            if(arr[leftIndex] >= left) {
                left = arr[leftIndex];
            }
            leftIndex--;
        }

        int right = 0, rightIndex = i+1;
        while(rightIndex < n) {
            if(arr[rightIndex] >= right) {
                right = rightIndex;
            }
            rightIndex++;
        }

        int waterStored = min(left, right) - arr[i];

        if(waterStored > 0) {
            sum += waterStored;
        }
    }
    
    return sum;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << rainWater(arr, n);

    return 0;
}