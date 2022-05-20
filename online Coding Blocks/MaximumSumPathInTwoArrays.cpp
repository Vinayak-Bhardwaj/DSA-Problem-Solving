// Approach for the problem is just like merge sort only  
// The idea is to do something similar to merge process of merge sort. This involves calculating the sum 
// of elements between all common points of both arrays. Whenever there is a common point, compare the two 
// sums and add the maximum of two to the result.

#include<bits/stdc++.h>
using namespace std;

int max(int x, int y) { return (x > y) ? x : y; }

int main() {
    int t;
    cin >> t;
    while(t--) {
        int m, n;
        cin >> m >> n;
        int arr1[m], arr2[n];

        for(int i = 0; i < m; i++) {
            cin >> arr1[i];
        }

        for(int j = 0; j < n; j++) {
            cin >> arr2[j];
        }

        int i = 0, j = 0, sum1 = 0, sum2 = 0, result = 0;
        while(i < m && j < n) {

            // This less than addition in sum condition is used to add sum of elements between common points in both the arrays seperately
            // and since array is sorted in increasing order so It would do our work accordingly
            if(arr1[i] < arr2[j]) {
                sum1 = sum1 + arr1[i++];
            }
            else if(arr1[i] > arr2[j]) {
                sum2 = sum2 + arr2[j++];
            }
            else {
                result = result + max(sum1, sum2) + arr1[i];
                sum1 = 0;
                sum2 = 0;
                i++;
                j++;
            }
        }
        while(i < m){
            sum1 += arr1[i++];
        }
        
        while(j < n){
            sum2 += arr2[j++];
        }
        
        result = result + max(sum1, sum2);

        cout << result << endl;
    }
    return 0;
}