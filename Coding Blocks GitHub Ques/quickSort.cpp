#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int *arr, int low, int high) {            // Partition process
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    do {
        while(arr[i] <= pivot) {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < j) {
            swap(arr[i], arr[j]);
        }
    } while(i < j); 

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int *arr, int low, int high) {
    //BASE CASE
    if(low >= high) {                               // stop sorting if low >= high
        return;
    }
    //RECURSIVE CASE
    int partitionIndex = partition(arr, low, high);     // take out the partition index, i.e position on which the element is sorted
    quickSort(arr, low, partitionIndex - 1);            //sort left subarray
    quickSort(arr, partitionIndex + 1, high);           //sort right subarray
}

int main() {
    int arr[] = {7, 11, 9, 2, 17, 4};
    int n = sizeof(arr) / sizeof(int);
    printArray(arr, n);
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}