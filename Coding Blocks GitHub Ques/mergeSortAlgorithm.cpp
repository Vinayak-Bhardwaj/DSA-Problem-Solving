// Merge sort ka game ye hai ki hume ek unsorted array ko lagatr divide karte jaana hai, jabtak wo single elements me naa break ho jaaye.
// ab single element sorted hota hai, to inhi single sorted elements ko merge algorithm se milate chale jaana hai

//Steps : 
//1. Divide once and let recursion divide it further
//2. merge the arrays using merge algortihm seperate function


#include<bits/stdc++.h>
using namespace std;

void mergeArray(int* a, int* b, int* c, int start, int end) {
    int mid = (start + end) / 2;
    int i = start;
    int j = mid + 1;
    int k = start;
    while(i <= mid && j <= end) {
        if(b[i] < c[j]) {
            a[k++] = b[i++]; 
        }
        else {
            a[k++] = c[j++];
        }
    }
    
    while(i <= mid) {
        a[k++] = b[i++];
    }
    while(j <= end) {
        a[k++] = c[j++];
    }

}

void mergeSort(int *a, int start, int end) {
    // BASE CASE
    if(start >= end) {
        return;
    }
    //RECURSIVE CASE
    int mid = (start + end) / 2;
    int b[100], c[100];
    
    for(int i = 0; i <= mid; i++) {                     // DIVIDE 1-1 ARRAY YOURSELF
        b[i] = a[i];
    }
    for(int i = mid + 1; i <= end; i++) {               // DIVIDE 1-1 ARRAY YOURSELF
        c[i] = a[i];
    }

    mergeSort(b, start, mid);                           //LET RECURSION DIVIDE IT FURTHER TILL WE GET 1-1 ELEMENT
    mergeSort(c, mid + 1, end);

    mergeArray(a, b, c, start, end);                    // NOW BECAUSE WE HAVE 1-1 ELEMENTS WHICH ARE ITSELF SORTED WE CAN COMBINE THEM TO MAKE A BIG SORTED ARRAY

}

void printArray(int* arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int a[] = {8, 7, 6, 9, 4, 3, 2, 1, 0};
    int n = sizeof(a) / sizeof(int);
    mergeSort(a, 0, n - 1);
    printArray(a, n);
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// void merge(int* a, int* b, int* c, int start, int end) {
//     int mid = (start + end) / 2;
//     int i = start;
//     int j = mid + 1;
//     int k = start;
    
//     while(i <= mid && j <= end) {
//         if(b[i] < c[j]) {
//             a[k++] = b[i++];
//         }
//         else {
//             a[k++] = c[j++];
//         }
//     }

//     while(i <= mid) {
//         a[k++] = b[i++];
//     }

//     while(j <= end) {
//         a[k++] = c[j++];
//     }
// }

// void mergeSort(int* arr, int start, int end) {
//     // BASE CASE
//     if(start >= end) {
//         return;
//     }
//     // RECURSIVE CASE
//     int mid = (start + end) / 2;
//     int b[100], c[100];

//     for(int i = start; i <= mid; i++) {
//         b[i] = arr[i];
//     }

//     for(int i = mid + 1; i <= end; i++) {
//         c[i] = arr[i];
//     }

//     mergeSort(b, start, mid);
//     mergeSort(c, mid + 1, end);

//     merge(arr, b, c, start, end);
// }

// void printArray(int *arr, int n) {
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }

// int main() {
//     int a[] = {8, 7, 6, 9, 4, 3, 2, 1, 0};
//     int n = sizeof(a) / sizeof(int);
//     mergeSort(a, 0, n - 1);
//     printArray(a, n);
//     return 0;
// }