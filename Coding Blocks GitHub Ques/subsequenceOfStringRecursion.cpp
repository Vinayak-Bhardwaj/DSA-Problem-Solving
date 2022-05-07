//see what we try to do is ki hum process dekhte hain aur bina workflow mind kare hum ussi process ko recursion me formulate karte hain

#include<bits/stdc++.h>
using namespace std;

void subsequence(char in[], char out[], int i, int j) {
    // BASE CASE
    if(in[i] == '\0') {
        out[j] = '\0';
        cout << out << endl;
        return;
    }
    //RECURSIVE CASE
    out[j] = in[i];                                         // Ek baar ith character ko output array me daalna hai, aur aage proceed karna hai
    subsequence(in, out, i + 1, j + 1);                     // ab jab in aur out array dono ke ek ek char se dealing ho chuki hai to aage badhao dono ke pointers
    // NO WORD                                              // Ek baar ith character ko output array me nahi daalna hai, aur aage proceed karna hai
    subsequence(in, out, i + 1, j);                         // ab jab in arr ke element ko nahi daala j me to i inc hoga aur j whi rahega, becuase i ka humne nahi daala but j still abhi bhi apne pehle element ka wait kar raha hai
}

int main() {
    char str[100], out[100];
    cin >> str;
    subsequence(str, out, 0, 0);
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// void subsequence(char in[100], char out[100], int i, int j) {
//     // BASE CASE
//     if(in[i] == '\0') {
//         out[j] = '\0';
//         cout << out << endl;
//         return;
//     }
//     // RECURSIVE CASE
//     out[j] = in[i];
//     subsequence(in, out, i + 1, j + 1);
//     subsequence(in, out, i + 1, j);
// }

// int main() {
//     char in[100], out[100];
//     cin >> in;
//     subsequence(in, out, 0, 0);
//     return 0;
// }