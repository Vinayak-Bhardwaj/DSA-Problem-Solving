/* kya ho sakta hai generalised simpler problem to sorted array problem?
suppose hum 2,4,7,9,11,17 ka example lete hain, koi array sort kab hota hai, jab wo ek particular order me ho chahe ascending yaa descending, ab agar ascending lete hain. To agar mujhe sirf 2 cheez pata chal jaaye 1. ye ki 2 ke right me pura array sorted hai yaa nahi aur 2. ki 2 < (right ke array ke first element se) to bass agar koi ye 2 cheeze batade to me usse bata skata hu ki array sorted hai kaise?
2 elements hai humare paas pehle. 2 aur dusra. {4, 7, 9, 11, 17} to agar right waala sorted hai to very good aadhi dikkat khatam dusro ko dekhne ki, bas ab ek condition aur chaiye agar 2 < 4 se to very good puri continuity chain me array sorted hai, but agar 2>4 hai to yaar continuity to yahi break ho gayi 2 > 4 < 7 < 9 < 11 < 17 to array sorted nahi hai */


#include<bits/stdc++.h>
using namespace std;

bool isArraySort(int *arr, int n) {
    //BASE CASE
    if(n == 0 || n == 1) {                                   // Ek single element bhi agar array me reh jaaye to array sorted maana jaata hai naa kyuki single element kisse compare karoge
        return true;
    }
    // if(n == 1 && arr[0] < arr[1]) {
    //     return true;
    // }
    //RECURSIVE CASE                           
    bool isRestArraySorted = isArraySort(arr + 1, n - 1);
    bool isFirstElementSorted = (arr[0] < arr[1]) ? true : false;
    if(isRestArraySorted && isFirstElementSorted) {
        return true;
    }
    return false;
}

int main() {
    int arr1[] = {7, 11, 9, 2, 17, 4};
    int arr2[] = {2, 4, 7, 9, 11, 17};
    int n = sizeof(arr1) / sizeof(int);
    if(isArraySort(arr2, n)) {
        cout << "Sorted";
    }
    else {
        cout << "Not Sorted";
    }
    return 0;
}

//.............................................................PRACTICE


// #include<bits/stdc++.h>
// using namespace std;

// bool isArraySort(int *arr, int n) {
//     // BASE CASE
//     if(n == 1) {
//         return true;
//     }
//     // RECURSIVE CASE
//     bool restArray = isArraySort(arr + 1, n - 1);
//     if(restArray && arr[0] < arr[1]) {
//         return true;
//     }
//     return false;
// }

// int main() {
//     int arr1[] = {7, 11, 9, 2, 17, 4};
//     int arr2[] = {2, 4, 7, 9, 11, 17};
//     int n = sizeof(arr1) / sizeof(int);
//     if(isArraySort(arr1, n)) {
//         cout << "Sorted";
//     }
//     else {
//         cout << "Not Sorted";
//     }
//     return 0;
// }
