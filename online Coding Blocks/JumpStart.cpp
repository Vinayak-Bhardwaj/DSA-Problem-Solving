#include<bits/stdc++.h>
using namespace std;

void assignment(int n, char* out, int j, int &counter) {
    // BASE CASE
    if(j == n) {
        out[j] = '\0';
        counter++;
        return;
    }
    // RECURSIVE CASE
    //1. Ek baar 0 daalo aur aage badao
    out[j] = '0';
    assignment(n, out, j + 1, counter);

    //2. EK baar 1 daalo check karke agar pichla 1 nahi hai to
    if(out[j - 1] != '1') {
        out[j] = '1';
        assignment(n, out, j + 1, counter);
    }
	else {
		return;
	}
}

int main() {
	int n, counter = 0;
	char out[100];
	cin >> n;
	assignment(n, out, 0, counter);
	cout << counter;
    return 0;
}