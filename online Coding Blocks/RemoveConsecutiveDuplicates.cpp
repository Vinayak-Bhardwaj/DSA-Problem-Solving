#include<bits/stdc++.h>
using namespace std;
int main() {
    char arr[1000];
    cin.getline(arr,1000);
    int i = 0, j = i + 1;
    int len = strlen(arr);
    while(j < len) {
        if(arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
        j++;
    }
    arr[++i] = '\0';
    cout << arr;
    return 0;
}