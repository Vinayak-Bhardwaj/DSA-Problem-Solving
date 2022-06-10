// By this firstly we are calcultaing all the remainders of n / 2 and then later on reversing the number by multiplying the numbers from
// starting by the increasing power of 10
// Like numnber after div obtained is 1101 but we want 1011 so 1*1 + 1*10 + 0*100 + 1*1000 = 1011

#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n) {
    int p = 1, sum = 0;
    while(n > 0) {
        sum += (n % 2)*p;
        p *= 10;
        n /= 2;
    }
    return sum;
}

int decToBin(int n) {
    int p = 1, sum = 0;
    while(n > 0) {
        //cout << "I";
        sum += (n & 1) * p;
        n = n >> 1;
        p *= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << decimalToBinary(n) << endl;
    cout << decToBin(n);
    return 0;
}