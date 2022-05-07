#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli n, arr1[100000], arr2[100000], arr3[100000], counter = 0;
    cin >> n;
    
    //Inputting the 1st array
    for(lli i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    //Inputting the 2nd array
    for(lli i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    //Finding the intersection
    for(lli i = 0; i < n; i++) {
		lli element = arr1[i];
        for(lli j = 0; j < n; j++) {
            if(arr2[j] == element) {
                arr3[counter] = element;
                counter++;
                arr2[j] = INT_MIN;
				break;
            }
        }
    }

    sort(arr3, arr3 + counter);

    cout << "[";
    for(lli i = 0; i <= counter - 2; i++) {
        cout << arr3[i] << ", ";
    }
    cout << arr3[counter - 1] << "]";
    return 0;
}