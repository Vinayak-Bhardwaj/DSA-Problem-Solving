#include<bits/stdc++.h>
using namespace std;

// char ar[] = {' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

// int n;

// vector<string> str;

// void solve(char *in, char *out, int i, int j) {
//     if(in[i] == '\0'){
//         out[j] = '\0';
//         str.push_back(out);
//         //cout << out << ", ";
//         return;
//     }

//     int digit = in[i] - '0';
//     out[j] = ar[digit];
//     solve(in, out, i + 1, j + 1);

//     if(i + 1 < n) {
//         int digit2 = (in[i] - '0') * 10 + (in[i + 1] - '0');
//         if(digit2 <= 26){
//             out[j] = ar[digit2];
//             solve(in, out, i+2,j+1);
//         }
//     }
// }

// int main() {
//     char in[1000], out[1000];
//     cin >> in;
//     n = strlen(in);
//     solve(in, out, 0, 0);
    
//     cout << "[";
//     for(auto it = str.begin(); it < str.end() - 1; it++) {
//         cout << *it << ", ";
//     }
//     cout << *(str.end() - 1);
//     cout << "]";

//     return 0;
// }

int counter = 0;

void codes(int* in, int* out, int i, int j, int len) {
    // BASE CASE
    if(i == len) {
        // Print the out array
        for(int p = 0; p < j; p++) {
            cout << out[p] << " ";
        }
        cout << endl;
        return;
    }
    // RECURSIVE CASE

    out[j] = in[i];
    codes(in, out, i + 1, j + 1, len);
    
    if(i + 1 < len) {
        int digit = in[i]*10 + in[i + 1];
        out[j] = digit;
        codes(in, out, i + 2, j + 1, len);
    }
}



int main() {
    string str;
    int arrIn[1000] = {0}, arrOut[1000] = {0};
    
    cin >> str;
    int len = str.length();

    for(int i = 0; i < len; i++) {
        arrIn[i] = str[i] - '0';
    }

    codes(arrIn, arrOut, 0, 0, len);

    return 0;
}















