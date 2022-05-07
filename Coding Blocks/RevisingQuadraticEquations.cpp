#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, disc, r1, r2;
    cin >> a >> b >> c;
    disc = pow(b, 2) - 4*a*c;
    if(disc > 0) {
        r1 = (-b - sqrt(disc)) / (2 * a);
        r2 = (-b + sqrt(disc)) / (2 * a);
        cout << "Real and Distinct" << endl << r1 << " " <<r2;
    }
    else if(disc == 0) {
        r1 = r2 = (-b) / (2 * a);
        cout << "Real and Equal" << endl << r1 << " " <<r2;
    }
    else {
        cout << "Imaginary";
    }
    return 0;
}