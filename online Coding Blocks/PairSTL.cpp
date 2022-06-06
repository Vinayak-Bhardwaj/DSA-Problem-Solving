#include<bits/stdc++.h>
using namespace std;
int main() {
    pair<string, int> p;
    pair<string, pair<float, int> > p1;

    p1.first = "AUDI";
    p1.second.first = 500.056;
    p1.second.second = 10;

    cout << p1.first << endl;
    cout << p1.second.first << endl;
    cout << p1.second.second << endl;
    
    cin >> p.first;
    cin >> p.second;

    cout << p.first << endl << p.second;
    return 0;
}