#include<bits/stdc++.h>
using namespace std;

// Compare Function
bool compareTo(string s1, string s2) {

	int i = 0;														// With the use of this iterator we'll start from 0 in both strings and compare each and every character

	while (i < s1.length() && i < s2.length()) {					// will run till either of the strings finishes

		if (s1[i] > s2[i]) {										// if 1st char of s1 is large then return false to sort function and swap s1, s2 (internally) because s1 > s2 and we want in ascending order
			return false;
		} else if (s1[i] < s2[i]) {									// if 1st char of s1 is less than return true to sort function and don't swap s1, s2 because s1 is already less than s2
			return true;
		}
		i++;														// keep increasing the iterator
																	// if characters keep on coming same then it means two things, either in s1 and s2, one is prefix of other or both values are same
	}

	if (s1.length() > s2.length()) {								// in both the cases either prefix or same value case. while loop will finish without returning something and will come here at this point
																	// Now it will say ki jiski length badi hai uske saath true return aur doosre ka saath false resturn karofor eg app and apple both will come out of the while loop and since app.length < apple.length so it will return true for apple and values will get swap
		return true;
	} else {
		return false;
	}

}

int main() {
	int n;
	string str[1000];
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++) {
		cin >> str[i];
	}
	sort(str, str + n, compareTo);
	for(int i = 0; i < n; i++) {
		cout << str[i] << endl;
	}
	return 0;
}
