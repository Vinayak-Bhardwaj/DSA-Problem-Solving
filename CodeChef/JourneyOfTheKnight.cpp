#include<bits/stdc++.h>
using namespace std;

bool valid(int xi, int yi) {
    if(xi >= 1 && xi <= 8 && yi >= 1 && yi <= 8) {
        return true;
    }
    return false;
}

int main() {
    int test;
    cin >> test;
    while(test--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int xi, yi;
        vector< pair<int, int> > store;
        pair<int, int> p;
        int count = 0;
        bool found = false;

        // All to be put in while part

        while(count <= 100) {
            //1.
            xi = x1 - 2;
            yi = y1 + 1;
            if(valid(xi, yi)) {
                p.first = xi;
                p.second = yi;
                store.push_back(p);
            }

            //2.
            xi = x1 - 1;
            yi = y1 + 2;
            if(valid(xi, yi)) {
                p.first = xi;
                p.second = yi;
                store.push_back(p);
            }

            //3.
            xi = x1 + 1;
            yi = y1 + 2;
            if(valid(xi, yi)) {
                p.first = xi;
                p.second = yi;
                store.push_back(p);
            }

            //4.
            xi = x1 + 2;
            yi = y1 + 1;
            if(valid(xi, yi)) {
                p.first = xi;
                p.second = yi;
                store.push_back(p);
            }

            //5.
            xi = x1 + 2;
            yi = y1 - 1;
            if(valid(xi, yi)) {
                p.first = xi;
                p.second = yi;
                store.push_back(p);
            }

            //6.
            xi = x1 + 1;
            yi = y1 - 2;
            if(valid(xi, yi)) {
                p.first = xi;
                p.second = yi;
                store.push_back(p);
            }

            //7.
            xi = x1 - 1;
            yi = y1 - 2;
            if(valid(xi, yi)) {
                p.first = xi;
                p.second = yi;
                store.push_back(p);
            }

            //8.
            xi = x1 - 2;
            yi = y1 - 1;
            if(valid(xi, yi)) {
                p.first = xi;
                p.second = yi;
                store.push_back(p);
            }

            // Check whether equal or not
            for(auto k: store) {
                if(k.first == x2 && k.second == y2) {
                    found = true;
                    break;
                }
            }

            if(found) {
                break;
            }
            count++;
        }

    }
}