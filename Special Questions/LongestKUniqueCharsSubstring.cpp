#include<bits/stdc++.h>
using namespace std;

int longestKUniqueSubs(char str[], int k) {
    int i = 0, count = 0, len = -1, freq[26] = {0}, j;
    int wi, wj;
    for(j = 0; j < strlen(str); j++) {
        freq[str[j] - 'a']++;
        if(freq[str[j] - 'a'] == 1) {
            count++;
        }
        
        if(count == k) {
            // len = max(len, j - i + 1);
            if(j-i+1 >= len) {
                len = j-i+1;
                wi = i;
                wj = j;
            }

        }

        while(count > k) {
            freq[str[i] - 'a']--;
            if(freq[str[i] - 'a'] == 0)
                count--;
            i++;
        }
    }

    for(int p = i; p <= j; p++) {
        cout << str[p] << " ";
    }
    cout << endl;

    return len;
}

int main() {
    char str[1000];
    int k;
    cin >> str;
    cin >> k;

    cout << longestKUniqueSubs(str, k);

    return 0;
}