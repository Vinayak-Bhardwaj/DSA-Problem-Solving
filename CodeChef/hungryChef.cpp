#include<bits/stdc++.h>
using namespace std;
#define lli long long int

bool compare(pair<lli, lli> p1, pair<lli, lli> p2) {
    return p1.second > p2.second;
}

void burger(lli p1, lli p2, lli n, set<pair<lli, lli>> &setVect) {
    // Base case
    if((p1 + p2) == n) {
        pair<lli, lli> p;
        p.first = p1;
        p.second = p2;
        //vect.push_back(p);
        setVect.insert(p);
        return;
    }
    if(p1 > n || p2 > n) {
        return;
    }
    // Recursive case
    burger(p1, p2 + 1, n, setVect);
    burger(p1 + 1, p2, n, setVect);
}


void vectorChecker(set<pair<lli, lli>> &setVect, lli x, lli y, lli r, vector<pair<lli, lli>> &vect) {

    for(auto it: setVect) {
        lli rs1 = it.first * x;
        lli rs2 = it.second * y;
        if((rs1 + rs2) <= r) {
            // setVect.erase(it);
            vect.push_back(it);
        }
    }
}

int main() {
    lli test;
    cin >> test;
    while(test--) {
        lli x, y, n, r;
        cin >> x >> y >> n >> r;

        set<pair<lli, lli>> setVect;
        vector<pair<lli, lli>> vect;

        burger(0, 0, n, setVect);

        vectorChecker(setVect, x, y, r, vect);

        // sort(vect.begin(), vect.end(), compare);

        if(vect.size() > 0) {
            cout << vect[0].first << " " << vect[0].second << endl;
        }
        else {
            cout << "-1" << endl;
        }
        
    }
    return 0;
}