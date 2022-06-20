#include<bits/stdc++.h>
using namespace std;

string keys[] = { " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wx", "yz"};

int counter = 0;

void keypad(char* in, char* out, int i, int j) {
    // BASE CASE
    if(in[i] == '\0') {
        out[j] = '\0';
        cout << out << " ";
        counter++;
        return;
    }
    // RECURSIVE CASE
    int dig = in[i] - '0';
    for(int k = 0; keys[dig][k] != '\0'; k++) {
        out[j] = keys[dig][k];
        keypad(in, out, i + 1, j + 1);
    }
}

int main() {
    int n;
    cin >> n;
    char in[100], out[100];
    
    int i = 0;
    while(n > 0) {
        in[i] = (n % 10) + '0';
        i++;
        n /= 10;
    }
    in[i] = '\0';
    reverse(in, in + strlen(in));
    keypad(in, out, 0, 0);
    cout << endl;
    cout << counter;
    return 0;
}