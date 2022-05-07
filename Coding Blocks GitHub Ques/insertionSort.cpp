// Humesha main kaam us loop yaa uss part ka hai jo 1 particular pass ke andr chalega


#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int *arr, int n) {
    int key, j;
    for(int i = 1; i <= n-1; i++) {                 // Loop for the number of passes and i=1 start because we want to start array operation from index 1 because index 0 element is already sorted
        key = arr[i];                               // assigning the element that is ready to move from the unsorted to sorted part and look at the beauty arr[i] i.e these moving elements will start from index 1 and we wanted that only
        j = i - 1;                                  // j sorted array me se humesha se last element ko point karega aur ussi last element se while shuru hoga aur whi rukega jiske aage humara moving element aana hai
        while(key < arr[j] && j >= 0) {             // jabtak key choti ha usse aage move karwate raho aur un elements ko aage copy karte raho ek aage ke index par usse hoga kya ki bade elements peeche shift hote jaayenge jabtak sahi index naa mile
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;                           // jab finally wo element mil jaaye jisse bada ha humara moving element to matlab uske peeche lagna hai humara element to bass j + 1 karke usme key daaldo
    }
}

int main() {
    int arr[] = {7, 11, 9, 2, 17, 4};
    int arr1[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = sizeof(arr) / sizeof(int);
    int m = sizeof(arr1) / sizeof(int);
    printArray(arr, n);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}