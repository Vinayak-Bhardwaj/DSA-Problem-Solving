#include<bits/stdc++.h>
using namespace std;

int length(char* ch) {
    int counter = 0;
    for(int i = 0; ch[i] != NULL; i++) {
        counter++;
    }
    return counter;
}

void removeDuplicates(char *ch) {
    //STEP1: To find number of duplicates ahead
    int len = length(ch);
    for(int i = 0; i < len; i++) {
        int duplicates = 0;
        int point = i + 1;
        while(ch[point] == ch[i]) {
            duplicates++;
            point++;
        }
        // if duplicates exist then move the complete string ahead
        if(duplicates > 0) {
            for(int j = i + 1; j <= len - duplicates; j++) {
                ch[j] = ch[j + duplicates];
            }
            ch[len - duplicates + 1] = NULL;
            len = len - duplicates;
        }
    }
    cout << ch;
}

int main() {
    char ch[1000];
    cin.getline(ch, 1000);
    removeDuplicates(ch);
    return 0;
}