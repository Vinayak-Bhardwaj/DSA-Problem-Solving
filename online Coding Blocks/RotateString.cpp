#include<bits/stdc++.h>
using namespace std;
int main() {
    char ch[1000];
    cin.getline(ch, 1000);
    int n, len;
    cin >> n;
    len = strlen(ch);

    // 1. To store the last char and shift all string in first by 1 1 char ahead and later store that last char in front and repeat this process 3 times
    for(int i = 0; i < n; i++) {
        char pickedUp = ch[len - 1];
        int j = len - 2;
        while(j >= 0) {
            ch[j + 1] = ch[j];
            j--;
        }
        ch[0] = pickedUp;
    }
    cout << ch;
    return 0;
}