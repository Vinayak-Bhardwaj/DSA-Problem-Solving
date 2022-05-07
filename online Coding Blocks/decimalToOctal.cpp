#include<bits/stdc++.h>
using namespace std;

void decToOct(int n) {
	// BASE CASE
	if(n == 0) {
		return;
	}
	// RETURN CASE
	decToOct(n / 8);
	cout << n % 8;
}

int main() {
	int num;
	cin >> num;
	decToOct(num);
	return 0;
}