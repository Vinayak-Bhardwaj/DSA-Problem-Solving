#include<bits/stdc++.h>
using namespace std;

string nums[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printNum(int n) {
    // BASE CASE
    if(n == 0) {
        return;
    }
    // RECURSIVE CASE
    printNum(n / 10);
    int rem = n % 10;
    cout << nums[rem] << " ";
}

int main() {
    int n;
    cin >> n;
    printNum(n);
    return 0;
}