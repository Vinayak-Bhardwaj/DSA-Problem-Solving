#include<bits/stdc++.h>
using namespace std;

int total = 0;

void store(char out[], int &j, int val) {
    int num = 0;

    // Reversing the number
    while(val > 0) {
        int rem = val % 10;
        num = num*10 + rem;
        val /= 10;
    }

    // Using that reversed number to store in the character array because answer issi se aa raha hai
    while(num > 0) {
        int rem = num % 10;
        out[j] = rem + '0';
        j++;
        num /= 10;
    }

    // kyuki while loop se exit karne se pehle j incremented hoga aur function return ke neeche jo func hai waha par bhi j inc hoga to 2 baari se accha ek baar hi ho increment
    j--;
}

void asciiSubseq(char in[], char out[], int i, int j) {
    // BASE CASE
    if(in[i] == '\0') {
        out[j] = '\0';
        cout << out << " ";
        total++;
        return;
    }
    // RECURSIVE CASE
    
    // 1. Don't Store anything
    asciiSubseq(in, out, i + 1, j);

    // 2. Store the alphabet
    out[j] = in[i];
    asciiSubseq(in, out, i + 1, j + 1);

    // 3. Store the Number
    int val = (int)in[i];
    store(out, j, val);
    asciiSubseq(in, out, i + 1, j + 1);
}

int main(){
    char in[1000], out[1000];
    cin >> in;
    asciiSubseq(in, out, 0, 0);
    cout << endl << total;
    return 0;
}