#include<bits/stdc++.h>
using namespace std;

void assignment(int n, char* out, int j, int &counter) {
    // BASE CASE
    if(j == n) {
        out[j] = '\0';
        counter++;
        //cout << out << endl;
        return;
    }
    // RECURSIVE CASE
    //1. Ek baar a daalo aur aage badao
    out[j] = 'a';
    assignment(n, out, j + 1, counter);

    //2. EK baar b daalo check karke agar pichla b nahi hai to
    if(out[j - 1] != 'b') {
        out[j] = 'b';
        assignment(n, out, j + 1, counter);
    }
	else {
		return;                                     // We don't have to do any work then
	}
}

int main() {
    int test;
    cin >> test;
    for(int i = 1; i <= test; i++) {
        int n, counter = 0;
        char out[100];
        cin >> n;
        assignment(n, out, 0, counter);
        cout << "#" << i << " : " << counter << endl;
    }
    return 0;
}