#include<iostream>
#include<math.h>
using namespace std;

int Binary(int num) {
    int sum = 0, counter = 0;
    while(num > 0) {
        int rem = num % 10;
        sum = sum + pow(2, counter) * rem;
        counter++;
        num = num / 10;
    }
    return sum;
}

int main() {
    int n, num;
    cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>num;
        cout<<Binary(num)<<endl;
    }
    return 0;
}