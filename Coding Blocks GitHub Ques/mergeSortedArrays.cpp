// #include<bits/stdc++.h>
// using namespace std;

// void mergeArray(int* arr1, int* arr2, int size1, int size2) {
//     int finalArray[size1 + size2];
//     int i = 0, j = 0, k = 0;
//     while(i < size1 && j < size2) {
//         if(arr1[i] <= arr2[j]) {
//             finalArray[k] = arr1[i];
//             k++;
//             i++;
//         }
//         else {
//             finalArray[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }
//     if(i == size1) {
//         while(j != size2) {
//             finalArray[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }
//     if(j == size2) {
//         while(i != size1) {
//             finalArray[k] = arr1[i];
//             k++;
//             i++;
//         }
//     }
//     for(int p = 0; p < k; p++) {
//         cout << finalArray[p] << " ";
//     }
// }

// int main() {
//     int arr1[] = {1, 3, 5, 6, 8};
//     int arr2[] = {0, 2, 4, 7};
//     int size1 = 5, size2 = 4;
//     mergeArray(arr1, arr2, size1, size2);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

void mergeArray(int *arr1, int *arr2, int size1, int size2) {
    int finalArray[size1 + size2];
    int i = 0, j = 0, k = 0;
    while(i < size1 && j < size2) {
        if(arr1[i] < arr2[j]) {
            finalArray[k++] = arr1[i++];
        }
        else {
            finalArray[k++] = arr2[j++];
        }        
    }
    while(i < size1) {
        finalArray[k++] = arr1[i++];
    }
    while(j < size2) {
        finalArray[k++] = arr2[j++];
    }
    for(int i = 0; i < k; i++) {
        cout << finalArray[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 3, 5, 6, 8};
    int arr2[] = {0, 2, 4, 7};
    int size1 = 5, size2 = 4;
    mergeArray(arr1, arr2, size1, size2);
    return 0;
}