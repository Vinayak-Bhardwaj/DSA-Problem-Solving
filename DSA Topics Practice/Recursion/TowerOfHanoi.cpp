#include<bits/stdc++.h>
using namespace std;

void TOH(int n, char source, char helper, char destination) {
    // BASE CASE
    if(n == 0) {
        return;
    }
    // RECURSIVE CASE
    TOH(n-1, source, destination, helper);
    cout << "Transfer the plate " << n << " From "<< source << " To " << destination << endl;
    TOH(n-1, helper, source, destination);
}

int main() {
    int n;
    cin >> n;
    TOH(n, 'A', 'B', 'C');
    return 0;
}