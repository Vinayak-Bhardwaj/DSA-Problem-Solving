#include<bits/stdc++.h>
using namespace std;
int main() {
	int n1, n2, gcd, i = 1;
	cin >> n1 >> n2;
	int small = (n1 < n2) ? n1 : n2;
	int large = (n1 > n2) ? n1 : n2;
	while(i != (small + 1)) {
		if(large % i == 0 && small % i == 0) {
			gcd = i;
		}
		i++;
	}
	cout << gcd;
	return 0;
}