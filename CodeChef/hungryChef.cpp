#include<bits/stdc++.h>
using namespace std;
#define lli long long int

void burger(lli target, set<pair<lli, lli>> &setVect) {

    // Creating the array
    lli arr[target + 1];
    for(lli i = 0; i <= target; i++) {
        arr[i] = i;
    }

    lli i = 0, j = target;

    while(i <= target && j >= 0) {
        if(arr[i] + arr[j] == target) {
            pair<lli, lli> p;
            p.first = arr[i];
            p.second = arr[j];
            setVect.insert(p);
            i++;
            j--;
        }

        else if(arr[i] + arr[j] > target) {
            j--;
        }

        else {
            i++;
        }
    }

}
 
void vectorChecker(set<pair<lli, lli>> &setVect, lli x, lli y, lli r, vector<pair<lli, lli>> &vect) {

    for(auto it: setVect) {
        lli rs1 = it.first * x;
        lli rs2 = it.second * y;
        if((rs1 + rs2) <= r) {
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

        burger(n, setVect);

        vectorChecker(setVect, x, y, r, vect);

        if(vect.size() > 0) {
            cout << vect[0].first << " " << vect[0].second << endl;
        }
        else {
            cout << "-1" << endl;
        }
        
    }
    return 0;
}