#include<bits/stdc++.h>
using namespace std;

void kUnique(char str[], int k) {
    int i = 0, count = 0, len = -1, freq[26] = {0};
    for(int j = 0; j < strlen(str); j++) {
        freq[str[j] - 'a']++;
        if(freq[str[j] - 'a'] == 1) {
            count++;
        }
        while(count > k) {
            freq[str[i] - 'a']--;
            if(freq[str[i] - 'a'] == 0)
                count--;
            i++;
        }
        if(count == k) {
            len = max(len, j - i + 1);
        }
    }
    cout << len << endl;
}

int main() {
    char str[1000];
    cin >> str;
    int k;
    cin >> k;

    kUnique(str, k);
    
    return 0;
}