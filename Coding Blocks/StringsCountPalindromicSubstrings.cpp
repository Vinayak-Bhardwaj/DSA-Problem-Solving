#include<bits/stdc++.h>
using namespace std;
#define lli long long int

lli lengthString(char *ch) {
    lli counter = 0;
    for(lli i = 0; ch[i] != NULL; i++) {
        counter++;
    }
    return counter;
}

bool isPalin(char* ch) {
    for(lli i = 0; i < lengthString(ch); i++) {
        if(ch[i] != ch[lengthString(ch) - 1 - i])
            return false;
    }
    return true;
}


lli subStrings(char* ch) {
    //lli length = ch.length();
    lli count = 0;
    lli length = lengthString(ch);
    //Approach is that we will keep two iterators i and j and will move them accordingly and use a third loop to store elements from i to j in a different array and later check that to be a pallin
    for(lli i = 0; i < length; i++) {
        for(lli j = i; j < length; j++) {
            //string sub;
            char sub[1000];
            lli counter = 0;
            for(lli k = i; k <= j; k++) {
                sub[counter] = ch[k];
                counter++;
            }
            sub[counter] = NULL;
            if(isPalin(sub)) {
                //cout << sub << endl;
                count++;
            }
        }
    }
    return count;
}

int main() {
    //string ch;
    char ch[1000];
    cin >> ch;
    cout << subStrings(ch);
    return 0;
}