#include<bits/stdc++.h>
using namespace std;

void swap(int x, int y) {
    cout << "x = " << x << " and y = " << y << endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "x = " << x << " and y = " << y << endl;
}

int main() {
    int a = 5, b = 4;
    cout << "a = " << a << " and b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << " and b = " << b << endl;
    return 0;
}