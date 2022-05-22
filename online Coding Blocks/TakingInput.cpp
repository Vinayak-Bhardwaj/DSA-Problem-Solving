#include<bits/stdc++.h>
using namespace std;

void readLine(char a[], char delimiter) {
    int i = 0;
    char ch;
    ch = cin.get();
    while(ch != delimiter) {
        a[i] = ch;
        i++;
        ch = cin.get();
    }
    a[i] = NULL;
}

int main() {
    char a[1000];
    //readLine(a, '\n');
    readLine(a, '$');
    cout << a;
    return 0;
}