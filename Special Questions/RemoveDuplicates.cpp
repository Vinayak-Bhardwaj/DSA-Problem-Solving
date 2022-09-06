#include<bits/stdc++.h>
using namespace std;

char* removeDuplicates(char str[]) {
    int length = strlen(str);
    int i = 0, j = 1;
    while(j <= length) {
        if(str[i] == str[j]) {
            j++;
        }
        else if(str[i] != str[j]) {
            i++;
            str[i] = str[j];
        }
        // if(str[i] != str[j]) {
        //     i++;
        //     str[i] = str[j];
        // }
        // j++;
    }

    return str;
}

int main() {
    char str[] = "COODDDINGG";
    cout << removeDuplicates(str);
    return 0;
}