// Approach is the we'll calculate the water stored on each building seperately and then take the summation of all
// Now water is stored on a building only in condition when the neighbour buildings are taller than the given building
// Now how to take the water out = minimum of(left most tallest building, right most tallest building) - height of orgininal building
// Now if water stored is > 0 then take in it summation


#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while(test--) {
        int n, arr[1000];
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int sum = 0;

        for(int i = 0; i < n; i++) {

            int left = 0;
            int leftIndex = i - 1;
            while(leftIndex >= 0) {
                if(arr[leftIndex] > left) {
                    left = arr[leftIndex];
                }
                leftIndex--;
            }

            int right = 0;
            int rightIndex = i + 1;
            while(rightIndex < n) {
                if(arr[rightIndex] > right) {
                    right = arr[rightIndex];
                }
                rightIndex++;
            }


            int waterStored = min(left, right) - arr[i];

            // cout << "Water Stored on building " << i << " is " << waterStored << endl;

            if(waterStored > 0){
                sum += waterStored;
            }
        }

        cout << sum << endl;

    }

    return 0;
}