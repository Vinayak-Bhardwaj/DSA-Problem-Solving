#include<bits/stdc++.h>
using namespace std;
int main() {
	char ch;
	int n1, n2;
	cin >> ch;
	while(ch != 'x' && ch != 'X') {
		if(ch == '+' || ch == '-' || ch == '*' || ch == '/') {
			cin >> n1 >> n2;
			switch(ch) {
				case '+':
					cout << n1 + n2 << endl;
					break;
				case '-':
					cout << n1 - n2 << endl;
					break;
				case '*':
					cout << n1 * n2 << endl;
					break;
				case '/':
					cout << n1 / n2 << endl;
					break;
			}
		}
		else {
			cout << "Invalid operation. Try again." << endl;
		}
		//cout<< " hello";
		cin >> ch;
	}
	return 0;
}