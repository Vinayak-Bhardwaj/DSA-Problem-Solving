#include<bits/stdc++.h>
using namespace std;

bool compare(pair<string, int> p1, pair<string, int> p2) {
    if(p1.second == p2.second) {
        return p1.first < p2.first;
    }
    return p1.second > p2.second;
}

int main() {
    int x, n;
    cin >> x >> n;
    
    pair <string, int> p[n];

    for(int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }

    sort(p, p + n, compare);

    // for(int i = 0; i < n; i++) {
    //     cout << p[i].first << " "<< p[i].second << endl;
    // }

    //cout << endl << endl;

    for(int i = 0; p[i].second >= x && i < n; i++) {
        cout << p[i].first << " "<< p[i].second << endl;
    }

    return 0;
}