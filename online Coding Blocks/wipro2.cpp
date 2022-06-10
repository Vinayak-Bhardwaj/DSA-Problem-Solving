#include<bits/stdc++.h>
using namespace std;

void uncommonSum(int* arr1, int s1, int* arr2, int s2) {
    int arr3[100];
    int k = 0;
    for(int i = 0; i < s1; i++) {
        int element = arr1[i];
        int j;
        for(j = 0; j < s2; j++) {
            if(arr2[j] == element) {
                break;
            }
        }
        if(j == s2) {
            arr3[k] = element;
            k++;
        }
    }

    int sum = 0;

    for(int i = 0; i < k; i++) {
        sum += arr3[i];
    }
    
    while(sum >= 10) {
        int sumDig = 0;
        while(sum > 0) {
            sumDig += sum % 10;
            sum /= 10;
        }
        sum = sumDig;
    }

    cout << sum;

}

int main() {
    int arr1[] = {123, 45, 7890, 67, 2, 90};
    int arr2[] = {45, 7890, 123};
    uncommonSum(arr1, 6, arr2, 3);
    return 0;
}