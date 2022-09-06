#include<bits/stdc++.h>
using namespace std;

string str[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",};

void print(int num) {
    // BASE CASE
    if(num == 0) {
        return;
    }
    // RECURSIVE CASE
    print(num / 10);
    int dig = num % 10;
    cout << str[dig] << " ";
}

int main() {
    int num;
    cin >> num;
    print(num);
    return 0;
}