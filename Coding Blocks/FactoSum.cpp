#include<bits/stdc++.h>
using namespace std;

int fact(int num) {
    int pro = 1;
    for(int i = 1; i <= num; i++) {
        pro *= i;
		pro %= 107;
    }
    return pro;
}

int main() {
    int n, sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        sum += fact(num);
        sum %= 107;
    }
    cout << sum;
    return 0;
}