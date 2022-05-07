#include<bits/stdc++.h>
using namespace std;

int main() {
    long int n, num, sum = 0, counter = 0;
    cin>>n;
    num = n;
    if(n == 0) {
        sum = 5;
    }
	while(n > 0) {
        int rem = n % 10;
        rem = (rem == 0) ? 5 : rem;
        sum = sum + (rem * pow(10, counter));
        counter++;
        n /= 10;
    }
    cout<<sum;
    return 0;
}