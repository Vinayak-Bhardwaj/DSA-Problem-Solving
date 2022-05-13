#include<bits/stdc++.h>
using namespace std;
int main() {
    int size, arr[1000], target;
    cin >> size;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cin >> target;
    int i = 0, j = size - 1, sum = 0;

    // Printing the array before sorting
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    sort(arr, arr + size);

    // Printing the array after sorting
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    while(i < j) {
        sum = arr[i] + arr[j];
        if(sum == target) {
            cout << arr[i] << " and " << arr[j] << endl;
            i++;
            j--;
        }
        else if(sum > target) {
            j--;
        }
        else {
            i++;
        }
    }
    return 0;
}