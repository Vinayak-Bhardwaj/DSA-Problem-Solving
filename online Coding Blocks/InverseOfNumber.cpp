#include<bits/stdc++.h>
using namespace std;
int main() {
	int num, counter = 1;
	cin >> num;
	int length = to_string(num).length();
	int arr[length] = {0};
	while(num > 0) {
		int rem = num % 10;
		arr[length - rem] = counter;
		counter++;
		num /= 10;
	}
	counter--;
	for(int i = 0; i < counter; i++) {
		cout << arr[i];
	}
	return 0;
}